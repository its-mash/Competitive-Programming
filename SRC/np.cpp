#include <cstdio>
#include <cmath>
typedef long long ll;
ll arr[100];
ll triangle[101][101];
int ans = 0;


ll C(ll n, ll r){
    ll ans = 1;
    int i;
    for(i = 1; i <= r; i++){
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}
ll ones(int n){
    if(n<=2) return 1;
    int a = n-1;
    int b = (n/2)-1;
//printf("hh %lld\n", C(a,b));
    return C(a,b) + ones(n-2);
}
int main(){
    //freopen("in","r",stdin);
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        ll c; scanf("%lld", &c);
        c = (int)log2(c);
        c = ((c%2) ? c-1 : c); 
      //  printf("ii %lld\n", c);
        printf("%lld\n", ones(c));

    }
    return 0;
}
