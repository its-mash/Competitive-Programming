#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
        cout<<"f("<<n<<") = "<<((n%11==10)?-1:n%11)<<endl;
        cin>>n;
    }
}





