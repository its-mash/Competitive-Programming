#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int ex[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                cin>>ex[i][j];
                // cout<<ex[i][j]<<" ";
            }
            // cout<<endl;
        }
        
        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-i-1;j++){
                int c=0,ii=i,jj=j,t1=ex[i][j],t2;
                while(c<4){
                   int ci=ii;
                   ii=jj;
                   jj=n-ci-1;
                   t2=ex[ii][jj];
                   ex[ii][jj]=t1;
                   t1=t2;
                   c++;
                }
            }
        }
        // cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<ex[i][j]<<" ";
            // cout<<endl;
        }
        cout<<endl;
    }
}