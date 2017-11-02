#include <iostream>
using namespace std;

long long  call(long long a){
    if(a<=9)
        return a;
    else
        return call(a-11);
}

int main(){
    ios_base::sync_with_stdio(false);
    long long n;
    cin>>n;
    while(n!=0){
        cout<<"f("<<n<<") = "<<call(n)<<endl;
        cin>>n;
    }
}


