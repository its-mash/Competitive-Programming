#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string ex[n];
    for(int i=0;i<n;i++){
        cin>>ex[i];
    }
    for(int i=0;i<n;i++){
        int l=ex[i].length();
        if(l>10){
            cout<<ex[i][0]<<l-2<<ex[i][l-1]<<endl;
        }
        else{
            cout<<ex[i]<<endl;
        }

    }
    return 0;
}

