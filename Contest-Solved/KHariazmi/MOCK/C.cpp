#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long n;
    int t=0;
    cin>>n;
    while(n!=0){
        t++;
        int count=0;
        for(int i=1;3*i+3<=n;i++){
            for(int j=i+1;j*2+1<=n-i;j++){
                count++;
            }
        }
        cout<<"Case #"<<t<<": "<<n<<":"<<count<<endl;
        cin>>n;
    }
}

