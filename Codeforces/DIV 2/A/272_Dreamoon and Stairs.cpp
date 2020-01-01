#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(m>n){
        cout<<-1<<endl;
        return 0;
    }


    int l=ceil(n/2.0);
    cout<<(ceil((double)l/m)*m)<<endl;

}
