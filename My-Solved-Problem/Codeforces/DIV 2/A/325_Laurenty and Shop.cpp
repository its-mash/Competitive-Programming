#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n;
    int ex[3][n],ans[n];
    ex[0][0]=0;ex[1][n-1]=0;
    for(int i=1;i<n;i++){
        cin>>t;
        ex[0][i]=ex[0][i-1]+t;
       // cout<<ex[0][i]<<" ";
    }
   // cout<<endl<<endl;

    for(int i=0;i<n-1;i++){
        cin>>ex[1][i];
    }
    for(int i=n-2;i>=0;i--){
        ex[1][i]+=ex[1][i+1];
       // cout<<ex[1][i]<<" ";
    }
    //cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cin>>t;
        ans[i]=t+ex[0][i]+ex[1][i];
       // cout<<ans[i]<<" ";
    }
    //cout<<endl<<endl;
    sort(ans,ans+n);
    cout<<ans[0]+ans[1]<<endl;
}
