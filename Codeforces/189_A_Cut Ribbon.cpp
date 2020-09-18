#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,coins[3];
    cin>>n>>coins[0]>>coins[1]>>coins[2];


    int ex[4][n+1];
    memset(ex,0,sizeof(ex));

    sort(coins,coins+3);

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<=n;j++){
    //         ex[i][j]=0;
    //     }
    // }

    for(int i=1;i<4;i++){
        int coin=coins[i-1];
        // cout<<coin<<endl;
        for(int j=1;j<=n;j++){
            if(j-coin<0){
                ex[i][j]=ex[i-1][j];
                // cout<<ex[i][j]<<" ";
                continue;
            }

            int pv=ex[i-1][j-coin],cv=ex[i][j-coin];
            // cout<<"("<<pv<<","<<cv<<") ";
            if(pv>0 || j-coin==0){
                ex[i][j]=pv+1;
            }
            if((cv>0 || j-coin==0) && cv+1>ex[i][j]){
                ex[i][j]=cv+1;
            }
            if(ex[i-1][j]>ex[i][j])ex[i][j]=ex[i-1][j];
            // cout<<ex[i][j]<<" ";
        }
        // cout<<endl;
    }
    cout<<ex[3][n]<<endl;

}