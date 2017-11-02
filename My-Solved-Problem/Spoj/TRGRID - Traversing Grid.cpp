#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%2==0){

            if(m%2==0){
                cout<<((n<=m)?'L':'U')<<endl;
            }
            else{
                cout<<((n<m)?'L':'D')<<endl;
            }
        }
        else{
            if(m%2==0){
                cout<<((n<m)?'R':'U')<<endl;
            }
            else{
                cout<<((n<=m)?'R':'D')<<endl;
            }
        }
    }

}
