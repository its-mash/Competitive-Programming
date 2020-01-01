#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t,et[n];
    for(int i=0;i<n;i++){
        cin>>t;
        et[t-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<et[i]<<" ";
    }
    //cout<<endl;
    return 0;
}


