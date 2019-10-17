#include <bits/stdc++.h>
using namespace std;


int main(){
    int s,b; 
    while(cin>>s>>b && s!=0 && b!=0){
        int ex[s+1]={};
        int l,r;
        while(b--){
            cin>>l>>r;
            int prev=-1;
            if(l>1) prev=ex[l-1]==0?l-1:ex[l-1];
            for(int i=l;i<=r;i++){
                ex[i]=prev;
            }
            int next=-1;
            if(r<s)next=ex[r+1]==0?r+1:ex[r+1];
            cout<<prev<<" "<<next<<endl;
        }
        cout<<"-"<<endl;
    }

}