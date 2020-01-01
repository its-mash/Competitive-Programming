#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ex[2]={},co[2]={};
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        ex[a-1]+=b;
        co[a-1]++;
    }
    if(ex[0]>=co[0]*5)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
    if(ex[1]>=co[1]*5)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
}
