#include <bits/stdc++.h>
using namespace std;

int ans[1001][3000];
void gen(){
    ans[0][0]=1;
    int last=0;
    for(int i=1;i<1001;i++){
        int j;
        for(j=0;j<=last;j++){
            ans[i][j]=ans[i-1][j]*i;
        }
        for(j=0;j<=last;j++){
            ans[i][j+1]+=ans[i][j]/10;
            ans[i][j]%=10;
        }
        while(ans[i][j]!=0){
            ans[i][j+1]+=ans[i][j]/10;
            ans[i][j]%=10;
            j++;
        }
        last=j;
    }
}

int main(){
    gen();
    int n; 
    while(cin>>n){
        cout<<n<<"!"<<endl;
        int i=2999;
        while(ans[n][i]==0)i--;
        while(i>=0)cout<<ans[n][i--];
        cout<<endl;
    }
}