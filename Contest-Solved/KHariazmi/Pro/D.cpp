#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int y;
        cin>>y;
        string ans="No";
        if(y%4==0){
            if(y%100==0 && y%400==0){
                    ans="Yes";
            }
            if(y%100!=0)
                ans="Yes";
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}

