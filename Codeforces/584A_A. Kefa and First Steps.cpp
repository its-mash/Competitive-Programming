#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cv,pv,ans=1,cm=1;
    cin>>pv;
    while(--n){
        cin>>cv;
        if(cv>=pv){
            cm++;
        }
        else{
            ans=max(cm,ans);
            cm=1;

        }
        pv=cv;
    }
    ans=max(cm,ans);
    cout<<ans<<endl;

}   