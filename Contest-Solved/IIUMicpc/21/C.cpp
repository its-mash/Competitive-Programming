#include <bits/stdc++.h>
using namespace std;

void solve(string ex[],int com[4],int l,int b,int n){
    cout<<l<<" "<<b<<" "<<n<<endl;
    if(l==3){
        cout<<l<<endl;
        for(int i=0;i<4;i++){
            cout<<ex[com[i]]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0;i<=n-4+l+b;i++){
        com[l]=b+i;
        //cout<<b+i<<" ";
        solve(ex,com,l+1,b+i+1,n);
    }
}

int main(){
    int n;
    cin>>n;
    while(n!=0){
        string ex[n];
        for(int i=0;i<n;i++){
            cin>>ex[i];
        }
        sort(ex,ex+n);
        int com[4];
        solve(ex,com,0,0,n);
        cin>>n;
    }
}
