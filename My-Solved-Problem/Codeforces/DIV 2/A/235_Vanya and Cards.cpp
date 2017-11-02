#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    double x;
    cin>>n>>x;
    while(n--){
        int t;
        cin>>t;
        sum+=t;
    }
    cout<<ceil(abs(sum)/x)<<endl;
}
