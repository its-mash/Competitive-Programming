#include <bits/stdc++.h>
using namespace std;

int alp[26];

int main(){

    string ex;
    getline(cin,ex);

    for(int i=1;i<ex.length()-1;i+=3){
        alp[ex[i]-97]=1;
    }
    int count=0;
    for(int i=0;i<26;i++)
        if(alp[i]==1)
            count++;
    cout<<count<<endl;
}
