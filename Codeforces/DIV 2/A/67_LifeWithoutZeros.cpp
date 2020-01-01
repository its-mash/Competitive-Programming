#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    int t;
    cin>>a>>b;
    t=stoi(a)+stoi(b);

    regex pattern("0");

    a=regex_replace(a,pattern,"");
    b=regex_replace(b,pattern,"");
    c=regex_replace(to_string(t),pattern,"");

    if(stoi(a)+stoi(b)==stoi(c))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
