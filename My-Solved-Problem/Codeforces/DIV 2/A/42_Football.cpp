#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,c=1,cc;
    cin>>n;
    cc=n;
    string a,b;
    cin>>a;
    while(--n){
        string ex;
        cin>>ex;
        if(ex==a)
            c++;
        else
            b=ex;
    }
    cout<<((c>cc/2)?a:b)<<endl;
}
