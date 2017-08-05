#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int ex[n],et[m];
    for(int i=0;i<n;i++)
        cin>>ex[i];

    for(int i=0;i<m;i++)
        cin>>et[i];
    sort(ex,ex+n);
    sort(et,et+m);
    int ans=max(ex[0]*2,ex[n-1]);
    if(ans<et[0])
        cout<<ans<<endl;
    else
        cout<<-1<<endl;

}
