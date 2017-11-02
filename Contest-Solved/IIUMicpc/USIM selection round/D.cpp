
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        //cout<<a<<" "<<b<<endl;
        if(count(a.begin(),a.end(),' ') >= count(b.begin(),b.end(),' ') )
            cout<<a<<endl;
        else
            cout<<b<<endl;
    }
}


