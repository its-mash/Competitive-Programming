
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        cout<<setprecision(2)<<fixed<<(a*b)/2.0<<","<<sqrt(a*a+b*b)<<endl;
    }
}
