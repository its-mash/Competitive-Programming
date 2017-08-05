#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(max(a,b)!=a){
            int t=a;
            a=b;b=t;
        }
        if(max(p,q)!=a){
            int t=p;
            p=q;q=t;
        }
        //cout<<"dd"<<endl;
        //cout<<(pow((a+b)/(p+q),2.0)+pow((a-b)/(p-q),2.0))<<endl;
        if((p < a && q < b) || (p > a && b > (2*p*q*a + (p*p-q*q)*sqrt(p*p+q*q-a*a)) / (p*p+q*q)))
            cout<<"Escape is possible."<<endl;

        else
            cout<<"Box cannot be dropped."<<endl;
    }
}
