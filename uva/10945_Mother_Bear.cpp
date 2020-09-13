#include <bits/stdc++.h>

using namespace std;

int main(){
    string ex;
    while(getline(cin,ex) && ex!="DONE"){
        // cout<<ex<<endl;
        bool pal=true;
        int b=0,e=ex.length()-1;
        while(b<e){
            if(!isalpha(ex[b])){
                b++;
                continue;
            }
            if(!isalpha(ex[e])){
                e--;
                continue;
            }
            // cout<<ex[b]<<" "<<ex[e]<<endl;
            if(tolower(ex[b++])!=towlower(ex[e--]))pal=false;
        }
        if(pal)
            cout<<"You won't be eaten!"<<endl;
        else
        {
            cout<<"Uh oh.."<<endl;
        }
        
    }
}