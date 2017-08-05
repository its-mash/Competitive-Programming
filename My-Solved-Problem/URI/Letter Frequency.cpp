#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){

        int al[26]={};
        string ex;
        getline(cin,ex);
        for(int i=0;i<ex.length();i++){
            if(isalpha(ex[i]))
                al[tolower(ex[i])-97]++;
        }
        int maxx=al[0];
        for(int i=1;i<26;i++)
            if(al[i]>maxx)
                maxx=al[i];
        for(int i=0;i<26;i++)
            if(al[i]==maxx)
                cout<<char(i+97);
        cout<<endl;
    }

}
