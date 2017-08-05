#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    int m=0,x,y;
    cin>>x;
    while(--n){
        cin>>y;
        if(x-y>m)
            m=x-y;
        x=y;
    }
    cout<<(((m-c)>0) ? m-c:0)<<endl;
}
