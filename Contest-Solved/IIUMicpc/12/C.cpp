#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        string bang,ans="";
        cin>>n>>bang;
        int c=n;
        n=ceil(n/2);
        if(bang=="Zrog"){

            if(c!=1 && n%2==1)
                ans="Zrog";
            else
                ans="Trog";
        }
        else{
            if(c%3==0)
                ans="Zrog";
            else
                ans="Trog";
        }
        cout<<"Round "<<i<<": "<<ans<<endl;
    }
}

