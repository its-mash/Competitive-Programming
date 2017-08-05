#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int cc=n;
    map<int,int>ex;
    while(n--){
        int t;
        cin>>t;
        ex[t]++;
    }
    for(auto it=ex.begin();it!=ex.end();it++){
        //cout<<it->first<<" "<<it->second<<endl;
        if(it->second>(cc+1)/2)
        {
            cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"YES"<<endl;

}
