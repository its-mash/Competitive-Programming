#include <bits/stdc++.h>
using namespace std;

const int n=1000000;
bool prime[n+1];

void gen(){
    for(int i=2;i*i<=n;i++){
        if(!prime[i]){
            for(int j=i+i;j<=n;j+=i)
                prime[j]=true;
        }
    }
}

bool check(long long x){
    long long y=sqrt(x);
    if(y*y==x && !prime[y] && x!=1)
        return 1;
    return 0;
}

int main(){
    gen();
    int n;
    long long x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(check(x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}

