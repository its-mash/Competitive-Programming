#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    sort(ex,ex+n);
    int m=0,c=0;
    for(int i=1;i<n;i++){
        if(ex[i]>ex[i-1]){
            m=max(c,m);
            c=0;
        }
        else
            c++;
    }
    m=max(c,m);
    cout<<n-1-m<<endl;
}

