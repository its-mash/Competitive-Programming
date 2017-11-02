#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long n,h,k;
    cin>>n>>h>>k;
    long long sum=0,t,ans=0;
    for(int i=0;i<n;i++){
        cin>>t;
        //cout<<sum<<" "<<t<<" "<<ans<<endl;
        if(sum+t>h){
            ans++;
            sum=t+((sum>k)?sum-k:0);
            if(sum>h){
                ans+=ceil((double)sum/k);sum=t;
            }
        }
        else
            sum+=t;

    }

    ans+=ceil((double)sum/k);
    cout<<ans<<endl;
}
