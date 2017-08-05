#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,ans;
    cin>>n>>m>>a>>b;
    if(m*a>b){
        ans=(n/m)*b+(n%m)*a;
        ans=min(ans,((int)ceil((double)n/m))*b);
    }
    else{
        ans=n*a;
    }
    cout<<ans<<endl;
}
