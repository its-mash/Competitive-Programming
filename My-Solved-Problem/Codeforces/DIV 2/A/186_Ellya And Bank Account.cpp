#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int ex;
    cin>>ex;
    if(ex<0){
        int a=(ex%100)/10,b=(ex%10);
        cout<<((a>b)? ex/10: (ex/100)*10+b)<<endl;
    }
    else
        cout<<ex<<endl;
}
