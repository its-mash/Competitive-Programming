#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        double x,y;
        cin>>x>>y;
        cout<<fixed<<setprecision(2)<<"Case "<<i<<": "<<x*x+sqrt(y)<<endl;
    }
}
