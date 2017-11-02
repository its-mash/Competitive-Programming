#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    string ex;
    cin>>num;cin.ignore(4);
    cin>>ex;
    if(ex[0]=='w'){
        cout<<ceil((366-(num+2)%7)/7.0)<<endl;
    }
    else{
        if(num<=29)
            cout<<12<<endl;
        else if(num==30)
            cout<<11<<endl;
        else
            cout<<7<<endl;
    }
}
