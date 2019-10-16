#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=b.length(),m=a.length();
        int ex[n][m]={};

        if(a[0]==b[0]) ex[0][0]=1;

        for(int i=1;i<m;i++){
            if(b[0]==a[i]){
                ex[0][i]=1+ex[0][i-1];
            }
            else
            {
                ex[0][i]=ex[0][i-1];
            }
            
        }
        for(int i=1;i<n;i++){
            for(int j=i;j<m;j++){
                if(b[i]==a[j]){
                    ex[i][j]=ex[i-1][j-1]+ex[i][j-1];
                }else
                {
                    ex[i][j]=ex[i][j-1];
                }
                
            }
        }
        cout<<ex[n-1][m-1]<<endl;
    }
}