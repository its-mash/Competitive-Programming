#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char guti;
        int x,y;
        cin>>guti>>x>>y;
        if(guti=='r')
            cout<<min(x,y)<<endl;
        else if(guti=='k')
        {
           cout<<((x/2*y)+((x&1)?round(y/2.0):0))<<endl; 
           //(x*y+1)/2 another answer
        }
        else if(guti=='Q'){
            if(x==4 && y==4)
                cout<<3<<endl;
            else
                cout<<min(x,y)<<endl;
        }
        else{
            cout<<round(x/2.0)*round(y/2.0)<<endl;
        }
    }
}