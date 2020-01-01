#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,n,x,y;
    cin>>s>>n;
    multimap<int,int> ex;
    while(n--){
        cin>>x>>y;
        ex.insert(pair<int,int>(x,y));
    }
    for(auto it=ex.begin();it!=ex.end();it++){
        //cout<<it->first<<it->second<<endl;
        if(s>it->first)
            s+=it->second;
        else{
            cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
