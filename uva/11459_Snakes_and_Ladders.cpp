#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        char sc[a],mv[101];
        for(int i=0;i<a;i++)sc[i]=1;
        for(int i=1;i<101;i++)mv[i]=i;
        int f,t;
        while(b--){
           cin>>f>>t; 
           mv[f]=t;
        }
        bool gc=true;
        int cp=0;
        while(c--){
            cin>>f;
            if(gc){
                sc[cp]=mv[sc[cp]+f];
            }
            if(sc[cp]>99){
               gc=false; 
            }
            cp=(cp+1)%a;
            // cout<<cp<<a<<endl;
        }
        for(int i=0;i<a;i++){
            cout<<"Position of player "<<i+1<<" is "<<(int(sc[i]))<<"."<<endl;      
        }
    }
}