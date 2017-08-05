#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n;
    string ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    cin>>m;
    string et[m];
    for(int i=0;i<m;i++)
        cin>>et[i];
    if(n!=m){
        cout<<"Not Related"<<endl;
        return 0;
    }
    bool b=true,c=true;
    for(int i=0;i<n;i++){
        if(ex[i]!=et[i])
            b=false;
    }
    if(b){
        cout<<"Perfect Twins"<<endl;return 0;
    }
    b=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //
            //cout<<ex[i][j]<<" "<<et[j][n-i-1]<<endl;
            //cout<<"second "<<ex[i][j]<<" "<<et[n-j-1][i]<<endl;
            if(ex[i][j]!=et[j][n-i-1])
            {
                b=false;
            }
            if(ex[i][j]!=et[n-j-1][i])
            {
                c=false;
            }
        }
    }
    if(b || c){
        cout<<"Normal Twins"<<endl;return 0;
    }

    b=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //cout<<ex[i][j]<<" "<<ex[n-i-1][n-j-1]<<endl;
            if(ex[i][j]!=et[n-i-1][n-j-1])
            {
                b=false;break;
            }
        }
    }
    if(b){
        cout<<"Rival Twins"<<endl;return 0;
    }

    cout<<"Not Related"<<endl;

}

