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
