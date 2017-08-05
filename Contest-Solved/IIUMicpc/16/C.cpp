#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex;
    getline(cin,ex);
    for(int i=1;i<26;i++){
        string tm="";
        for(int j=0;j<ex.length();j++){
            if(isalpha(ex[j])){
                tm+=char((ex[j]-65+i)%26+65);
            }
            else
                tm+=" ";
        }
        cout<<tm<<endl;
    }
}

