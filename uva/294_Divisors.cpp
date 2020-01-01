#include <bits/stdc++.h>
using namespace std;
#define ll long long;
const int s=1000001;
int ex[s];

int getND(ll x){
    if(x<s)return ex[s];
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            return getND(i)+getND(x/i);
        }
    }
    return 0; 
}

int main(){
    for(int i=2;i<1001;i++){
        if(!ex[i]){
            for(int j=i+i;j<s;j+=i){
                ex[j]++;
            }
        }
    }
    ex[1]=-1;
    int n;cin>>n;
    while(n--){
        ll  l,u;
        cin>>l>>u;

    }

}
