#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,et="hello";
    cin>>ex;
    int i,j;
    for(i=0,j=0;i<ex.length() && j<et.length();i++){
        if(ex[i]==et[j])
            j++;
    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}


