#include <bits/stdc++.h>
using namespace std;

int main(){
    int ex[3],ans=0;
    memset(ex,0,sizeof(ex));
    int n;
    cin>>n;
    while(n--){
        string sl;
        cin>>sl;
        if(sl=="1/4")
            ex[0]++;
        else if(sl=="3/4")
            ex[2]++;
        else
            ex[1]++;

    }
    ans=min(ex[0],ex[2]);
    ex[0]-=ans;
    ex[2]-=ans;
    ans+=ex[2];
    ans+=ceil(ex[1]/2.0);
    if(ex[1]%2==1)
        ex[0]-=2;
    if(ex[0]>0)
        ans+=ceil(ex[0]/4.0);
    cout<<ans+1<<endl;
}
