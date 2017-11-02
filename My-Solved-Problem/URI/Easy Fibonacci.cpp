#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    cout<<0;
    int l=1,r=1;
    for(int i=1;i<n;i++){
        cout<<" "<<l;
        int t=r;
        r=l+r;
        l=t;
    }
    cout<<endl;
}
