#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int m=1;m<=t;m++){
        string ans="YES";
        int n;
        cin>>n;
        int ex[n];
        for(int i=0;i<n;i++)
            cin>>ex[i];
        bool b=true,c=true;
        for(int i=0;i<n-2 && b;i++){
            for(int j=i+1;j<n-1 && c;j++){
                for(int k=j+1;k<n;k++)
                if(abs((ex[i]-ex[j]))==abs(ex[j]-ex[k])){
                    ans="NO";b=false;c=false;break;
                }
            }
        }
        cout<<"Case #"<<m<<": "<<ans<<endl;
    }
}


