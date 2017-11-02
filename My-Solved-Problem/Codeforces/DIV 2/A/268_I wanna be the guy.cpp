#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    int ex[n]={};
    while(p--){
        int t;
        cin>>t;
        ex[t-1]=1;
    }
    cin>>p;
    while(p--){
        int t;
        cin>>t;
        ex[t-1]=1;
    }
    for(int i=0;i<n;i++){
        if(ex[i]!=1){
            cout<<"Oh, my keyboard!"<<endl;return 0;
        }
    }
    cout<<"I become the guy."<<endl;

}
