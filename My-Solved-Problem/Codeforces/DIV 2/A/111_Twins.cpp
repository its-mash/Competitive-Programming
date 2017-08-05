#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,sum2=0;
    cin>>n;
    int ex[n];
    for(int i=0;i<n;i++){
        cin>>ex[i];
        sum+=ex[i];
    }
    sum/=2;
    sort(ex,ex+n);
    int i;
    for(i=n-1;i>=0;i--){
        //cout<<ex[i]<<" ";
        sum2+=ex[i];
        if(sum2>sum)
            break;
    }
    cout<<n-i<<endl;

    return 0;
}


