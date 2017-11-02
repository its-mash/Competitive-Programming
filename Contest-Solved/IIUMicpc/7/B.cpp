#include <bits/stdc++.h>
using namespace std;

int  main(){
    ios_base::sync_with_stdio(false);
    string ex[]={"Gray","Black","White"};
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long n;
        cin>>n;
        cout<<"Case "<<i<<": "<<ex[n%3]<<endl;
    }
}
