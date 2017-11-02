#include <bits/stdc++.h>
using namespace std;

int main(){
    long long y,l=1,r;
    cin>>y;
    r=y;
    while(l<=r){
        long long mid=(l+r)/2,cp,sum=0;
        cp=mid;

        while(cp!=0){
            sum+=cp;
            cp/=10;
        }
         // cout<<mid<<" "<<sum<<endl;
        if(sum==y){
            cout<<mid<<endl;
            return 0;
        }
        else if(sum<y){
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<-1<<endl;

}
