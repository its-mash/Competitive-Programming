#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string ex[n];
    int et[n][n]={};
    for(int i=0;i<n;i++)
        cin>>ex[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ex[i][j]=='o'){
                if(j-1>=0)
                    et[i][j-1]++;
                if(j+1<n)
                    et[i][j+1]++;
                if(i-1>=0)
                    et[i-1][j]++;
                if(i+1<n)
                    et[i+1][j]++;
            }
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(et[i][j]%2==1){
                cout<<"NO"<<endl;return 0;
            }
    cout<<"YES"<<endl;
    return 0;
}
