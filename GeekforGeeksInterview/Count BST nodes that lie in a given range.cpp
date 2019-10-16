#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int c=0;        
        int ex[n];
        for(int i=0;i<n;i++){
            cin>>ex[i];
        }
        int l,h;cin>>l>>h;
        for(int i=0;i<n;i++){
            if(ex[i]>=l && ex[i]<=h)c++;
        }
        cout<<c<<endl;
    }
}