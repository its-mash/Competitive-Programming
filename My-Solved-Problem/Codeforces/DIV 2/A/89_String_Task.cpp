#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,ans="";
    cin>>ex;
    for(int i=0;i<ex.length();i++){
        if(tolower(ex[i])!='a' && tolower(ex[i])!='e' && tolower(ex[i])!='i' && tolower(ex[i])!='o' && tolower(ex[i])!='u' && tolower(ex[i])!='y'){
            ans+='.';
            ans+=tolower(ex[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}

