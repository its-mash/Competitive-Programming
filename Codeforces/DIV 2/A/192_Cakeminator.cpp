#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int r,c;
    cin>>r>>c;
    string ex[r];
    bool row[r]={},col[c]={};

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ex[i][j];
            if(ex[i][j]=='S'){
                row[i]=1;col[j]=1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<r;i++)
        if(row[i]==0)
            ans+=c;
    int count=ans/c;
    for(int i=0;i<c;i++)
        if(col[i]==0)
            ans+=(r-count);
    cout<<ans<<endl;

}
