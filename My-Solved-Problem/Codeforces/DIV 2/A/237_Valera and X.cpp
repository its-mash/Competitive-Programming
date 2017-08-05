#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    char d=ex[0][0],o=ex[0][1];
    for(int i=0,j=0,k=n-1,l=0;i<n;i++,j++,k--,l++){
        if(ex[i][j]!=d || ex[k][l]!=d){
            cout<<"NO"<<endl;return 0;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ex[i][j]==o)
                count++;
        }
    }
    if(count!=((n*n)-(2*n-1)))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
