#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int l,r;
    cin>>l>>r;
    (l%2==1)?l++:0;
    if(l+2>r)
        cout<<-1<<endl;
    else
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    return 0;
}
