#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    map<string,int>ex;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        ex[a]=5;
    }
    cin>>m;
    while(m--){
        string t;
        cin>>t;
        if(ex[t]==5){
            cout<<"Aladeen"<<endl;
        }
        else
            cout<<t<<endl;
    }
}
