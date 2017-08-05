#include <bits/stdc++.h>

using namespace std;

int main(){

    fflush(stdin);
    bool ans=true;
    cout<<2<<endl;

    string ex;
    cin>>ex;
    if(ex=="yes"){
        ans=false;
    }
    else{
        for(int i=3;i<10;i+=2){
        cout<<i<<endl;
        cin>>ex;
        if(ex=="yes")
            ans=false;break;
        }
    }
    if(ans)
        cout<<"prime"<<endl;
    else
        cout<<"composite"<<endl;
}
