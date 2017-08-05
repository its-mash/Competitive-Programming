#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    int tm=ex[k-1];
    for(int i=k;i<n;i++)
        if(tm!=ex[i]){
            cout<<-1<<endl; return 0;
        }
    for(k-=2;k>=0&& tm==ex[k];k--){
    }
    cout<<k+1<<endl;
}
