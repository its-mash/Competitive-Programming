#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ex[m];
    for(int i=0;i<m;i++){
        cin>>ex[i];
    }
    sort(ex,ex+m);
    int min=ex[n-1]-ex[0];
    for(int i=1;i<=m-n;i++){
        if(ex[i+n-1]-ex[i]<min)
            min=ex[i+n-1]-ex[i];
    }
    cout<<min<<endl;
    return 0;
}

