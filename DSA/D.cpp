#include <bits/stdc++.h>
using namespace std;
//stdLn
int main(){
    int n;
    cin>>n;
    map<string,int> ex;
    while(n--){
        string tm;
        cin>>tm;
        ex[tm]=5;
    }
    cin>>n;
    while(n--){
        string tm;
        cin>>tm;
        if(ex[tm]==5)
            cout<<"In"<<endl;
        else
            cout<<"Out"<<endl;
    }
}

