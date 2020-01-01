#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0,j=0,z=0;
    while(n--){
        int ti,tj,tz;
        cin>>ti>>tj>>tz;
        i+=ti;j+=tj;z+=tz;
    }
    if(i==0 && z==0 && j==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


