#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        int x=(s+d)/2;
        int y=(s-d)/2;
        if(x>=0 && y>=0 && x+y==s && x-y==d ){
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
        

    }
}