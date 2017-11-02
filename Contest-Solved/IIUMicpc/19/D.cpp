
#include <bits/stdc++.h>
using namespace std;

int main(){

    int r,c,rc,bc,f=0,in=0;
    cin>>r>>c>>bc>>rc;
    char ex[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>ex[i][j];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(ex[i][j]=='X'){
                f++;
                if(i>0 && j>0 && i<r-1 && j<c-1)
                in++;
            }


        }
    }

    int ans=0,need;
    if(r==1)
        need=c-f;
    else if(c==1)
        need=r-f;
    else
        need=r+r+(c-2)*2-(f-in);

  // cout<<in<<" "<<f<<" "<<need<<endl;
    if(bc<=rc || in==0){
        ans+=need*bc;
    }
    else{
        if(in>=need){
            ans+=rc*need;
        }
        else{
            ans+=rc*in;
            ans+=bc*(need-in);
        }
    }
    cout<<ans<<endl;
}
