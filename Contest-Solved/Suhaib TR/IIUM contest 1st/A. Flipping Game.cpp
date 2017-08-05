#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int ex[n],fx[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int c=0;
            for(int k=i;k<=j;k++)
                if(1-ex[k]==1)
                    c++;

            int a,b;
            a=count(ex,ex+i,1);
            b=count(ex+j+1,ex+n,1);
            //cout<<a<<" "<<b<<" "<<c<<" "<<j<<endl;
            ans=max(ans,a+b+c);
        }
    }
    cout<<ans<<endl;
}
