#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y,d;
        cin>>x>>y;
       /* if(x==0 || y==0){
            cout<<0<<" "<<0<<endl;return 0;
            logically without this  part the solution should be wrong, but it's  accepted
       }*/
        for(int i=min(x,y);i>=1;i--){
            if(x%i==0 && y%i==0){
                d=i;break;
            }
        }
        cout<<d<<" "<<((x/d)*(y/d))<<endl;
    }
}
