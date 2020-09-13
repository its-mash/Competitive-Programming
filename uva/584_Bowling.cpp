#include <bits/stdc++.h>
using namespace std;

int getS(string ex,int i){
    if(ex[i]=='X')return 10;
    if(ex[i]=='/')return (10-getS(ex,i-2));
    return ex[i]-'0';
}
int main(){
    string ex;
    while(getline(cin,ex) && ex[0]!='G'){
        int sc=0,c=1;
        for(int i=0;c<=20;i+=2){
            // cout<<ex[i]<<endl;
            if(ex[i]=='X'){
                sc+=10;
                sc+=getS(ex,i+2);
                sc+=getS(ex,i+4);
                c++;
            }
            else if(ex[i]=='/'){
                sc+=getS(ex,i);
                sc+=getS(ex,i+2);
            }
            else{
                sc+=ex[i]-'0';
            }
            c++;
            // cout<<sc<<" "<<c<<endl;
        }
        cout<<sc<<endl;
    }
}