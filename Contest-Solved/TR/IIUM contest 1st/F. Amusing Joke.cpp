#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,fx,gx;
    cin>>ex>>fx>>gx;
    ex+=fx;
    sort(ex.begin(),ex.end());
    sort(gx.begin(),gx.end());
    if(ex==gx)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
