#include <bits/stdc++.h>
using namespace std;

const double pi = 3.1415926535;

int main(){
    double r,h,h1,h2,h3,h4;
    cin>>r>>h>>h1>>h2>>h3>>h4;
    h1=max(max(h1,h2),max(h3,h4));
    long double ans=((4*r)*(4*r)*h1)-(pi*r*r*h);
    cout<<ans<<endl;


}

