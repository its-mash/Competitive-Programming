#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        long long a,b,c;
        cin>>a>>b>>c;
        int ans=a;
        for(int i=1;i<b;i++){
            ans=(a*ans)%c;
        }
        cout<<ans<<endl;
    }

}