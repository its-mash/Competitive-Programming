#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(false);
    int n,s,si=0,b,bi=0;
    cin>>n>>s;
    b=s;
    for(int i=1;i<n;i++){
        int  t;
        cin>>t;
        if(t>b){
            b=t;bi=i;
        }
        else if(t<s){
            s=t;si=i;
        }
    }
    if(si<bi){
        cout<<((bi>((n-1)-si))? bi : ((n-1)-si))<<endl;
    }
    else
        cout<<((si>(n-1)-bi)? si : (n-1)-bi)<<endl;

}
