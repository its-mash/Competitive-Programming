#include <bits/stdc++.h>
using namespace std;

const int n=1500;
bool prime[n+1];

void gen(){
    for(int i=2;i*i<=n;i++){
        if(!prime[i]){
            for(int j=i+i;j<=n;j+=i)
                prime[j]=true;
        }
    }
}

int main(){
    gen();
    int ex[3001]={};
    for(int i=2;i<=n;i++){
        if(!prime[i]){
            for(int j=i;j<3001;j+=i)
                ex[j]++;
        }
    }
    for(int i=2;i<3001;i++){
        ex[i]=(ex[i]==2) ? 1:0;
        ex[i]+=ex[i-1];
    }
    int x;
    cin>>x;
    cout<<ex[x]<<endl;

}
