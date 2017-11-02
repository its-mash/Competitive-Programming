#include <bits/stdc++.h>
using namespace std;

int  main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string f,s;
        int ans=0;
        cin>>f>>s;
        for(int j=0;j<f.length();j++){
            if(s[j]=='X'){
                ans+=(f[j]-'0');
            }
        }
        cout<<"RM "<<ans*50<<endl;
    }
}
