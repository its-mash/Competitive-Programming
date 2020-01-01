#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long ans=0;
        int n;cin>>n;
        int tv;
        map<char,int> val;
        char ch;
        while(n--){
            cin>>ch>>tv;
            val[ch]=tv;
        }
        cin>>n;
        cin.ignore();
        while(n--){
            string ex;
            getline(cin,ex);
            // cout<<ex<<"->"<<endl;
            for(int i=0;i<ex.length();i++)
                if(val.find(ex[i])!=val.end())
                     ans+=val[ex[i]];
        }
        long double as=ans/100.0;
        cout<<setprecision(2)<<fixed<<as<<"$"<<endl;
    }
}