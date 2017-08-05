#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ex[i][j]=='.'){
                if((i%2) == (j%2))
                    ex[i][j]='B';
                else
                    ex[i][j]='W';
            }

        }
    }
    for(int i=0;i<n;i++)
        cout<<ex[i]<<endl;

}
