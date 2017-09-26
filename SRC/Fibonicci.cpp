#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int t=0;
    cin>>n;
    while(n!=0){
        t++;
        long long count=0;
        for(long long i=1;3*i+3<=n;i++){
            for(long long j=i+1;j*2+1<=n-i;j++){
                count++;
            }
        }
        cout<<"Case #"<<t<<": "<<n<<":"<<count<<endl;
        cin>>n;
    }
}
