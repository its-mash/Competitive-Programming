#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[2*100000], q, queryValue;
    int index;
    cin >> n ;
    for(int i=0;i<n;i++){
    cin >> a[i];
    }
    sort(a,a+n);
    cin >> q ;
    for(int i=0;i<q;i++){
        cin >> queryValue;
        index = upper_bound(a,a+n,queryValue) - a;
        cout << n - index << endl;
    }
    return 0;
}
