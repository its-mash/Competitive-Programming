#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,ct;
    cin>>t;
    ct=t;
    while(t--){

        int n,m,k;
        cin>>n>>m>>k;
        n++;m++;
        long long ex[n][m]={};
        long long ans=0,oldPrice=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                cin>>ex[i][j];
                ex[i][j]+=ex[i-1][j]+ex[i][j-1]-ex[i-1][j-1];
                for(int ni=1;ni<=i;ni++){
                    for(int nj=1;nj<=j;nj++){
                       long long t= ex[i][j]-(ex[i-ni][j]+ex[i][j-nj]-ex[i-ni][j-nj]);
                       if(t<=k){
                           if(nj*ni>ans){
                               ans=nj*ni;
                            //    cout<<i-ni+1<<","<<j-nj+1<<" -> "<<i<<","<<j<< " = "<<t<<" "<<ni*nj<<" M"<<ans<<endl;
                               oldPrice=t;
                           }else if (nj*ni==ans && t<oldPrice){
                              oldPrice=t; 
                           }
                       }
                    }
                }
            }
            // cout<<endl;
        }
        cout<<"Case #"<<ct-t<<": "<<ans<<" "<<oldPrice<<endl;
    }
}