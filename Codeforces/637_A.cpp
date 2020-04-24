#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int rl=a-b;
        int rh=a+b;

        if(rl*n>c+d || rh*n<c-d){
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }
}