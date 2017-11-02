#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex;
    cin>>ex;
    int l=ex.length();
    if(ex==string(ex.rbegin(),ex.rend()))
        cout<<(ex.substr(0,l/2)+ex[l/2]+ex.substr(l/2))<<endl;
    else{
        for(int i=0;i<l/2;i++){
            string s1=ex.substr(0,i)+ex[l-i-1]+ex.substr(i),s2=ex.substr(0,l-i)+ex[i]+ex.substr(l-i);
            if(s1==string(s1.rbegin(),s1.rend()))
            {
                cout<<s1<<endl; return 0;
            }
            else if(s2==string(s2.rbegin(),s2.rend()) ){
                cout<<s2<<endl;return 0;
            }
        }
        cout<<"NA"<<endl;
    }
}
