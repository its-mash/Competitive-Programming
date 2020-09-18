#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ex[100001]={};
    int cn=n,tm;
    while(cn--){
        cin>>tm;
        ex[tm]++;
    }
    long long p=ex[0],c=ex[1];
    for(int i=2;i<=100000;i++){
        long long tm=ex[i];
        tm=tm*i+p;
        if(c>tm)tm=c;
        p=c;
        c=tm;
    }
    // for(int i=1;i<=n;i++){
    //     cout<<ex[i]<<" ";
    // }
    cout<<c<<endl;
    
}