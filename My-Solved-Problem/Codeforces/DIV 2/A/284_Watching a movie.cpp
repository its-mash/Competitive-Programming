#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,t=0,a,b,ans=0;
    cin>>n>>x;
    while(n--){
        cin>>a>>b;
        ans+=(b-a)+1;
        ans+=(a-t-1)%x;
        t=b;
    }
    cout<<ans<<endl;
}
