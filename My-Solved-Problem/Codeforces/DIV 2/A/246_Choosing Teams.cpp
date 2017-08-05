#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    sort(ex,ex+n);
    k=5-k;
    for(int i=0;i<n;i++){
        if(ex[i]>k){
            cout<<i/3<<endl;
            return 0;
        }
    }

    cout<<n/3<<endl;

}
