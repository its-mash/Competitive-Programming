#include <bits/stdc++.h>
using namespace std;

long long ncr(long long n,long long r){
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans*=(n-r+i);
        ans/=i;
    }
    return ans;
}

int main(){
    int n,d,c=2,ini=0;
    long long ans=0;
    cin>>n>>d;
    int ex[n+1];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    bool b=false;
    ex[n]=2000000005;
    for(int i=2;ini<=n-3;){
        if(ex[i]-ex[ini]<=d){
            c++;
            i++;
        }
        else{
            if(c>2){
                ans+=ncr(c-1,2);
            }
            else{

            }
            ini++;
            c--;
        }
    }
    cout<<ans<< endl;
}
