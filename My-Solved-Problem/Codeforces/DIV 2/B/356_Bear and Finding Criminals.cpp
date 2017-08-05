#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    cin>>n>>a;
    int ex[n];
    for(int i=0;i<n;i++){
        cin>>ex[i];
    }

    int count=0,i,j;

    if(ex[--a]==1)
        count++;
//    cout<<a<<endl;
    for(i=a-1,j=a+1;i>=0 && j<n;i--,j++){
        if(ex[i]==1 && ex[j]==1)
            count+=2;
    }
   // cout<<i<<" "<<j<<" "<<count<<endl;
    while(i > -1){
        if(ex[i]==1)count++;
        i--;
    }
   // cout<<count<<"dd"<<endl;

    while(j<n){
        if(ex[j]==1) count++;
        j++;
    }
    //cout<<count<<"sd"<<endl;

     cout<<count<<endl;
}
