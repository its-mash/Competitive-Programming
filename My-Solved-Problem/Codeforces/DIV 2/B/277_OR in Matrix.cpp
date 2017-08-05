#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    bool zeros=true;
    int ex[n][m],cp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ex[i][j];
            cp[i][j]=ex[i][j];
            if(ex[i][j]!=0)
                zeros=false;
        }
    }
    if(zeros){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    bool exist=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(ex[i][j]==1){
                bool l=true,r=true;
                for(int x=0;x<m;x++){
                    if(ex[i][x]!=1){
                        l=false;
                    }
                }
                for(int x=0;x<n;x++){
                    if(ex[x][j]!=1){
                        r=false;
                    }
                }
                if(!l && !r){
                        cout<<"NO"<<endl;return 0;
                    }

            }
            else{
                for(int x=0;x<m;x++){
                    cp[i][x]=0;
                }
                for(int x=0;x<n;x++){
                    cp[x][j]=0;
                }
            }
        }
    }
    bool b=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(cp[i][j]==1)
                b=true;
        }
    }
    if(b){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<cp[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"NO"<<endl;
    }
}
