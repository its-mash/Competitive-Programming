
#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,et;
    cin>>ex>>et;
    for(int i=0;i<ex.length();i++){
        ex[i]=tolower(ex[i]);
        et[i]=tolower(et[i]);
    }
    if(ex==et)
        cout<<0<<endl;
    else if(ex<et)
        cout<<-1<<endl;
    else
        cout<<1<<endl;
    return 0;
}

