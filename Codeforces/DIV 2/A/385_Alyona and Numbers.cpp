#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,t;
    cin>>x>>y;
    if(x>y){
        t=x;x=y;y=t;
    }
    long long ans=0;
    for(int i=1;i<=x;i++){
        ans+=(y+i)/5 - i/5;
    }
    cout<<ans<<endl;
}
