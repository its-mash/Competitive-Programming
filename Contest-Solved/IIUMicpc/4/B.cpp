#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long a,b,n;
    cin>>a>>b>>n;
    pair<int,string> ex[n];
    for(int i=0;i<n;i++){
        int t;
        string e;
        cin>>t>>e;
        ex[i]=make_pair(t,e);

    }
    if(a<=b){
        for(int i=a;i<=b;i++){
            string ans="";
            for(int j=0;j<n;j++){
                if(i%ex[j].first==0){
                    ans+=ex[j].second;
                }

            }
            if(ans!="")
                cout<<ans<<endl;
            else
                cout<<i<<endl;
        }
    }
    else{
        for(int i=a;i>=b;i--){
            string ans="";
            for(int j=0;j<n;j++){
                if(i%ex[j].first==0){
                    ans+=ex[j].second;
                }

            }
            if(ans!="")
                cout<<ans<<endl;
            else
                cout<<i<<endl;
        }

    }
}


