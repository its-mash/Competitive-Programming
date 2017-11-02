#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a+b+c == c+d+e && c+d+e==e+f+a)
        cout<<"Triangleable Hexagon"<<endl;
    else
        cout<<"Ugly Hexagon"<<endl;

}
