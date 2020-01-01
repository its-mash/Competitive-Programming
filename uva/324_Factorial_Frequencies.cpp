#include <bits/stdc++.h>
using namespace std;

const int N=366+1,d=781;
int ans[N][d];
void gen(){
    ans[0][0]=1;
    int last=0;
    for(int i=1;i<N;i++){
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
    while(cin>>n && n!=0){
        int i=d-1;
        while(ans[n][i]==0)i--;
        int ex[10]={};
        while(i>=0){
            ex[ans[n][i--]]++;
        }
        cout<<n<<"!--";
        for(int i=0;i<10;i++){
            if(i%5==0)cout<<endl;
            cout<<"("<<i<<") "<<ex[i]<<" ";
        }
        cout<<endl;
    }
}