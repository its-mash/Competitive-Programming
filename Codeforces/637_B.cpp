#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int l=0;
        int mx=0;
        int p,m,nx;
        int ex[n]={};
        cin>>p>>m;
        for(int i=2;i<n;i++){
            ex[i]=ex[i-1];
            cin>>nx;
            if(m>p && m>nx){
                // cout<<i<<endl;
                ex[i]++;
            }
            if(i-k+1>=0){
                if(ex[i]-ex[i-k+2]>mx){
                    l=i-k+1;
                    mx=ex[i]-ex[i-k+2];
                }
            }
            p=m;
            m=nx;
            // cout<<i<<" "<<ex[i]<<endl;
        }
        // cout<<endl;
        cout<<mx+1<<" "<<l+1<<endl;
    }
}