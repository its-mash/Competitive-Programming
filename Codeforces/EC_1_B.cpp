#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int q;
    cin>>q;
    int l=s.length();
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        int sz=(r-l+1);
        k=k%sz;
        int cc=0;
        for(int i=0;cc<sz;i++){
            char ch=s[i+l];
            int ni=i;
            do{
                int nd=(ni+k)%sz;
                char nx=s[nd+l];
                s[nd+l]=ch;
                ch=nx;
                ni=nd;
                cc++;
            }
            while(ni!=i && cc<sz);
            // cout<<s<<endl;
        }
        // cout<<endl;
    }
    cout<<s<<endl;
}