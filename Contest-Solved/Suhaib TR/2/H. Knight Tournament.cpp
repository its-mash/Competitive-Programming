#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int ex[n+1];
    int index[n+1];
    memset(ex,0,sizeof(ex));
    memset(index,0,sizeof(index));
    for(int i=0;i<m;i++){
        int l,r,x;
        cin>>l>>r>>x;

        for(;l<=r;l++){
            while(ex[l]!=0 && l <=r){
                l=index[l];
            }
            if(l<=r){
                ex[l]=x;
                if(l<x)
                    index[l]=x;
                else
                    index[l]=r+1;
            }
        }
        ex[x]=0;
    }
    for(int i=1;i<=n;i++){
        cout<<ex[i]<<" ";
    }
    cout<<endl;
}
