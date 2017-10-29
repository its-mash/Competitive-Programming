#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

long long minn=1000000000;

void printArray(int p[], int n,int c,long long ex[]) {
    int i;
    
    vector<int> dd;
    for (i = 0; i < n; i++){
        if(p[i])
            dd.push_back(p[i]);
    }
    sort(dd.begin(),dd.end());
    //cout<<c<<"fff"<<endl;
    if(dd.size()==c){
       
            long long tmin=0;
            for(int i=0;i<c;i++){
               // cout<<dd[i]<<" "<<tmin<<" , ";
                tmin=max(tmin*1.0,ceil(ex[i]/dd[i]));
            }
           // cout<<endl;
            minn=min(minn,tmin);               
       

    }       
        
}
 
void solve(int n,int c,long long ex[]) {
    int p[n]; // An array to store a partition
    int k = 0; // Index of last element in a partition
    p[k] = n; // Initialize first partition as number itself
    while (1) {

        printArray(p, k + 1,c,ex);
        int rem_val = 0;
        while (k >= 0 && p[k] == 1) {
            rem_val += p[k];
            k--;
        }
 
        if (k < 0)
            return;
        p[k]--;
        rem_val++;
        while (rem_val > p[k]) {
            p[k + 1] = p[k];
            rem_val = rem_val - p[k];
            k++;
        }
        p[k + 1] = rem_val;
        k++;
    }
}
 

int main(){
    freopen("in","r",stdin);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long c,d;
        cin>>c>>d;
        long long ex[c];
        for(int i=0;i<c;i++)
            cin>>ex[i];
        sort(ex,ex+c);
        solve(d,c,ex);
        cout<<minn<<endl;
        minn=1000000000;
    }
}