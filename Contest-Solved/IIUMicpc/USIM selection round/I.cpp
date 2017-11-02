#include <bits/stdc++.h>
using namespace std;

bool prime[1001];


void genPrime(){
    prime[1]=true;
    prime[0]=true;
    for(int i=4;i<1001;i+=2)
        if(i%2==0)
            prime[i]=true;
    for(int i=3;i*i<=1001;i+=2){
        if(!prime[i]){
            for(int j=2*i;j<1001;j+=i)
                prime[j]=true;
        }
    }
}

int main(){

    genPrime();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //cout<<i<<endl;
        if(!prime[i]){
            if(!prime[i-2] || !prime[i+2]){
                cout<<"Twin"<<endl;
            }
            else
                cout<<"Lonely Prime"<<endl;
        }
        else
           cout<<"Ordinary"<<endl;
    }
}




