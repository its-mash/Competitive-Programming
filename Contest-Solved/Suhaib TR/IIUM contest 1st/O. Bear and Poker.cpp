#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(a==0 || b==0)return a+b;
    return gcd(b, a % b);
}

/*long long lcm(long long a,long long b){
    long long t=gcd(a,b);
    return  t ? a/t*b : 0;
}
*/
bool check(long long x){
    if(!(x & (x-1)))
        return 1;
    while(x%3==0){
        x/=3;
    }
    if(!(x & (x-1)))
        return 1;

    return 0;
}

int main(){
    int n;
    long long g;
    cin>>n;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    g=accumulate(ex+1,ex+n,ex[0],gcd);
    //cout<<g<<endl;
    while(n--){
        if(ex[n]==1)
            continue;
        long long d=ex[n]/g;
        if(!check(d)){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
