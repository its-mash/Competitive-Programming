#include <bits/stdc++.h>
using namespace std;

int main(){

    int small[26]={},cap[26]={};
    string ex;
    getline(cin,ex);
    for(int i=0;i<ex.length();i++){
        if(!isalpha(ex[i]))
            continue;
        if(ex[i]>=97)
            small[ex[i]-97]++;
        else
            cap[ex[i]-65]++;

    }
    for(int i=0;i<26;i++){
        if(small[i]){
            cout<<char(i+97)<<" : "<<small[i]<<endl;
        }
        if(cap[i]){
            cout<<char(i+65)<<" : "<<cap[i]<<endl;
        }

    }
}
