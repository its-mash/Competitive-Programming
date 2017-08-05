#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    long long int m=ceil(n/2.0);
    if(k>m){
        cout<<(k-m)*2<<endl;
    }
    else
        cout<<((k*2)-1)<<endl;
    return 0;
}
