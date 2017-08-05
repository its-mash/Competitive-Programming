#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ex[n];
    for(int i=0;i<n;i++){
        cin>>ex[i];
    }
    sort(ex,ex+n);
    cout<<1<<" "<<ex[0]<<endl;
    int z;
    for(int i=0;i<n;i++)
        if(ex[i]==0){
            z=i;break;
        }

    int r=(z%2==0);
    //cout<<"sss "<<r<<" "<<z<<endl;
    cout<<n-2-r;
    for(int i=1;i<n;i++){
        if(i==z || i==z-r)
            continue;
        cout<<" "<<ex[i];
    }
    cout<<endl;
    cout<<r+1;
    for(int i=z-r;i<=z;i++)
        cout<<" "<<ex[i];
    cout<<endl;

}
