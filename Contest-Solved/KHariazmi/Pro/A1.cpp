#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++){
        string ex,tm;
        getline(cin,ex);
        ex.resize(ex.length()-2);
        istringstream is(ex);
        while(is>>tm){
            string ans(tm.length(),'*');
            cout<<ans<<endl;
        }
        if(i!=t)
            cout<<endl;
    }
}

