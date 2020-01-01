#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int s=n+n+1;
        int ex[s][s]={};
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>ex[i][j];
                ex[i][j+n]=ex[i+n][j]=ex[i+n][j+n]=ex[i][j];
            }
        }
        // for(int i=0;i<s-1;i++){
        //     for(int j=0;j<s-1;j++){
        //         cout<<ex[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=1;i<s-1;i++){
            for(int j=1;j<s-1;j++){
                ex[i][j]+=ex[i-1][j]+ex[i][j-1]-ex[i-1][j-1];
                int ii=min(i,n);
                int jj=min(j,n);
                for(int ni=1;ni<=ii;ni++){
                    for(int nj=1;nj<=jj;nj++){
                        int t=ex[i][j]-(ex[i-ni][j]+ex[i][j-nj]-ex[i-ni][j-nj]);
                        if(t>ans){
                            // cout<<ni<<","<<nj<<"-> "<<i<<","<<j<<" = "<<t<<" "<<ex[i][j]<<endl;
                            ans=t;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}