#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string ex;
    cin>>ex;
    int n,l=ex.length();;
    cin>>n;
    bool boo[l/2]={};
    while(n--){
        int b;
        cin>>b;b--;
        boo[b]=!boo[b];
    }
    int s=0;
    for(int i=0;i<l/2;i++){
        s+=boo[i];
        if(s%2==1){
            char ch=ex[i];
            ex[i]=ex[l-i-1];
            ex[l-i-1]=ch;
        }
    }
    cout<<ex<<endl;
}
