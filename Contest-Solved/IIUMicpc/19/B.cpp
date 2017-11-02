#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,ans="";
    cin>>ex;
    for(int i=0;i<ex.length();i++){
        if(ex[i]>'O'){
            if(ex[i]=='P')
                ans+="PP";
            else{
                ans+="P";
                ans+=ex[i]-16;
            }
        }
        else
            ans+=ex[i];
    }
    cout<<ans<<endl;
}
