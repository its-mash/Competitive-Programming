#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,t,index,i,c=0;
    bool b;
    cin>>n>>t;
    b=(t%2==0)?0:1;
    for(i=1;i<n;i++){
        cin>>t;
        if(t%2!=b ){
            b=t%2;index=i;c++;
        }
    }

    cout<<((c==1 && index!=1)? (index+1) :index)<<endl;
}
