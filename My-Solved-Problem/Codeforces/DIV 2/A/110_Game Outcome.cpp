#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int ex[n+1][n+1];
    memset(ex, 0, sizeof(ex[0][0]) *(n+1)*(n+1));
   // for(int i=0;i<n;i++)
     //   ex[0][i]=0;
    for(int i=0;i<n;i++){
        int sum=0,t;
        for(int j=0;j<n;j++){
            cin>>t;
            sum+=t;
            ex[i][j]+=t;
            ex[i+1][j]=ex[i][j];
        }
        ex[i][n]=sum;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ex[i][n]<ex[n][j])
                count++;
        }
    }
    cout<<count<<endl;
}
