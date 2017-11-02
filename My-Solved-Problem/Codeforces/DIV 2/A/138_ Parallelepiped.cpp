#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;;i++){
        if(a%i==0 && b%i==0 && ((a/i)*(b/i))==c ){
            cout<<4*(i+a/i+b/i)<<endl;break;
        }

    }
}
