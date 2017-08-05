#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(a==0 || b==0)return a+b;
    return gcd(b, a % b);
}

int main(){
    long long a,b;
    cin>>a>>b;
    while(a!=0 && b!=0){
        cout<<((a*b)/gcd(a,b))<<endl;
        cin>>a>>b;
    }

}

