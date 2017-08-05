#include <bits/stdc++.h>
using namespace std;

int  main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m;
        cin>>n>>m;
        string ex[n],ans="";
        for(int j=0;j<n;j++){
            cin>>ex[j];
        }
        bool dot=false,b=true;
        for(int s=1;s<n && b;s++){
            for(int d=1;d<m && b;d++){
                if(ex[s][d]==ex[s-1][d-1] && ex[s][d]==ex[s-1][d]  && ex[s][d]==ex[s][d-1]){
                    if(ex[s][d]=='O'){
                        ans="Ali";
                    }
                    else
                        ans="Ahmad";
                    b=false;
                }
            }

        }
        for(int s=0;s<n;s++){
            for(int d=0;d<m;d++){
                if(ex[s][d]=='.')
                    dot=true;
            }

        }
        if(ans!="")
            cout<<"Case "<<i<<": "<<ans<<endl;
        else if(dot)
            cout<<"Case "<<i<<": Not over yet"<<endl;
        else
            cout<<"Case "<<i<<": Draw"<<endl;
    }
}
