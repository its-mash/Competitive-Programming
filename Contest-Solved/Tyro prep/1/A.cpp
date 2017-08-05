#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maax=0;
        while(n--){
            int tm;
            cin>>tm;
            maax=max(maax,tm);
        }
        cout<<((maax>1)?"ambiguous":"not ambiguous")<<endl;
    }

}
