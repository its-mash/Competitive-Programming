#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int ex[n],et[n];
    for(int i=0;i<n;i++){
        cin>>ex[i]>>et[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n && j!=i;j++){
            if(ex[i]==et[j])
                count++;
            if(et[i]==ex[j])
                count++;
        }
    }
    cout<<count<<endl;
}
