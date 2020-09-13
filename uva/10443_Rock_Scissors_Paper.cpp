#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int r,c,n;
        cin>>r>>c>>n;
        char ex[r+2][c+2]={};
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                cin>>ex[i][j];
            }
        }
        while(n--){
            char up[c+2]={},left=' ';
            for(int i=1;i<=r;i++){
                for(int j=1;j<=c;j++){
                    char ch=ex[i][j];
                    // cout<<up[j]<<" "<<ch<<endl;
                    if(ch=='R'){
                        if(up[j]=='P' || ex[i+1][j]=='P' || left=='P' || ex[i][j+1]=='P')
                            ex[i][j]='P';
                    }
                    else if(ch=='P'){
                        if(up[j]=='S' || ex[i+1][j]=='S' || left=='S' || ex[i][j+1]=='S')
                            ex[i][j]='S';
                    }
                    else{
                        if(up[j]=='R' || ex[i+1][j]=='R' || left=='R' || ex[i][j+1]=='R')
                            ex[i][j]='R';
                    }
                    left=ch;
                    up[j]=ch;
                }
                left=' ';
                // cout<<"--"<<endl;
            }
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                cout<<ex[i][j];
            }
            cout<<endl;
        }
        if(t!=0)cout<<endl;

    }
}