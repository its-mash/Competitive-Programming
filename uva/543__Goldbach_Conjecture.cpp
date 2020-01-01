#include <bits/stdc++.h>
using namespace std;

const int s=1000001;
bool nrime[s];

int main(){
    for(int i=2;i<1001;i++){
        if(!nrime[i]){
            for(int j=i+i;j<s;j+=i){
                nrime[j]=true;
            }
        }
    }
    nrime[1]=true;
    nrime[0]=true;
    int n;
    cin>>n;
    while(n){
        bool f=true;
       for(int i=2;i<s;i++){
           if(!nrime[i] && !nrime[n-i]){
               cout<<n<<" = "<<i<<" + "<<n-i<<endl;
               f=false;
               break;
           }
       }
       if(f){
           cout<<"Goldbach's conjecture is wrong."<<endl;
       }
       cin>>n;
    }  
}