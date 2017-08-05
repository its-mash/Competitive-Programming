#include <bits/stdc++.h>
using namespace std;

int  main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int c,t=0;
        cin>>c;
        while(c--){
            int tm;
            cin>>tm;
            t+=tm;
        }
        cout<<"Case "<<i<<": "<<t<<endl;
    }
}
