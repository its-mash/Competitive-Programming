#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    while(n--){
        int t,c=0;
        cin>>t;
        while(t){
            if(t%10==4 || t%10==7 )
                c++;
            t/=10;
        }
        if(c<=k)
            count++;
    }
    cout<<count<<endl;
}
