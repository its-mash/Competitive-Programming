#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,f,t;;
    cin>>n>>k>>f>>t;
    int m= (t>k)? (f-(t-k)):f;
    while(--n){
        cin>>f>>t;
        m=max(m,((t>k)? (f-(t-k)):f));
    }
    cout<<m<<endl;
}
