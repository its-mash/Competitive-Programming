#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(a!=-1 && b!=-1 ){
        cout<<min(abs(b-a), min(abs(100-b+a),abs(100-a+b)))<<endl;
        cin>>a>>b;
    }
}
