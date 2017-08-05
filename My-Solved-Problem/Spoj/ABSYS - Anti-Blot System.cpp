#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string a,t,b,c,d="machula";
        cin>>a>>t>>b>>t>>c;
        if(a.find(d)!=string::npos){
            cout<<stoi(c)-stoi(b)<<" + "<<b<<" = "<<c<<endl;
        }
        else if(b.find(d)!=string::npos){
            cout<<a<<" + "<<stoi(c)-stoi(a)<<" = "<<c<<endl;
        }
        else{
            cout<<a<<" + "<<b<<" = "<<stoi(a)+stoi(b)<<endl;
        }
    }

}
