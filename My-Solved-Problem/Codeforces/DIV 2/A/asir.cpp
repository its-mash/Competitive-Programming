#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    int a=x,b=y,t;

    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{   int p,q,n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        m = gcd(p,q);
        cout<<m<<" "<<(p/m)*(q/m)<<endl;
    }
}
