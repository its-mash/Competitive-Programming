#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main(){
    double a;
    while(cin>>a){
        double z=(a*a*(1-PI/6.0-sqrt(3)/4.0)),y=a*a-(PI*a*a)/4.0-2*z,x=a*a-4*z-4*y;
        cout<<fixed<<setprecision(3)<<x<<" "<<4*y<<" "<<4*z<<endl;
    }
}
