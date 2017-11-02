#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string tm="";
            for(int j=0;j<n;j++){
                tm+=(i==j || i==n-j-1)? "0 ":"1 ";
            }
            tm.resize(tm.length()-1);
            cout<<tm<<endl;
        }
        if(i!=t)
            cout<<endl;
    }
}

