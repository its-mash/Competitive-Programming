#include <bits/stdc++.h>
using namespace std;

#define GET(x) ((prime[x>>5]>>(x&31))&1)
#define SET(x) (prime[x>>5]|=(1<<(x&31)))

const int n=20000001;
const int s=(n>>5)+1;

int prime[s],twin[100001],p=0;

void genPrime( ){
    SET(1);
    register int i,j;
    for(i=4;i<n;i+=2){
       SET(i);
    }
    for(i=3;p<100001;i+=2){
        if(!GET(i)){
            if(!GET(i-2))twin[p++]=i;
            for(j=i+i;j<n;j+=i){
                SET(j);
            }
        }
    }
}
int main(){
    genPrime();
    int in;
    while(cin>>in){
        cout<<"("<<twin[in-1]-2<<", "<<twin[in-1]<<")"<<endl;
    }
}