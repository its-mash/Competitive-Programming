#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int p,v,ans=0;
    string ex;
    cin>>ex>>v;
    bitset<32> x(v);
    p=(ex[1]=='F')? 0:1;
    if(p!=x[0])
        ans++;
    for(int i=1;i<32;i++){
        if(x[i]!=x[i-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
}

