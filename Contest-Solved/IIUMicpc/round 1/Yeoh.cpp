#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m,s,t;
        cin>>t;
        m=t;s=t;
        for(int i=1;i<n;i++){
            cin>>t;
            if(t>m)
                m=t;
            if(t<s)
                s=t;
        }
        //cout<<m<<" "<<s<<endl;
        cout<<((m-s)*2)<<endl;
    }

}


