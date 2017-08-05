#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string ex;
        cin>>ex;
        for(int i=ex.length()-1;i>0;i--){
            if(ex[i]>='5'){
                ex[i]='0';ex[i-1]++;
            }
            else
                ex[i]='0';
        }
        if(ex[0]==':'){
            ex[0]='0';ex='1'+ex;
        }

        cout<<ex<<endl;
    }
}
