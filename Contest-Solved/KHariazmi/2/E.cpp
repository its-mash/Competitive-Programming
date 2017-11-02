#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m=0;cin>>n;
        for(int i=0;i<n;i++){
            int tm;
            cin>>tm;
            m=max(m,tm);
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }
}
