#include <bits/stdc++.h>
using namespace std;

bool isBingo(int p,int bg[][5],bool f[]){
    f[p]=true;
    bool o=false,h=true,v=true,d1=true,d2=true;
    for(int i=0;i<5;i++){
        v=true;
        h=true;
        if(!f[bg[i][i]])d1=false;
        if(!f[bg[i][4-i]])d2=false;
        for(int j=0;j<5;j++){
            if(!f[bg[i][j]]) v=false;
            if(!f[bg[j][i]]) h=false;
            // if(p==14)
            //     cout<<bg[j][i]<<" ";
        }
        // if(p==14)
        //     cout<<endl;
        o=o || h||v;
    }
    // for(int i=0;i<5;i++) {
    //     for(int j=0;j<5;j++){
    //         cout<<f[bg[i][j]];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    return o||d1||d2;
}

int main(){
    int n;
    cin>>n;
    while(n--){
       int bg[5][5];
       bool f[76]={};
       f[0]=true;
       for(int i=0;i<5;i++) {
           for(int j=0;j<5;j++){
               if(i==2 && j==2){
                   bg[2][2]=0;
                   continue;
               }
               cin>>bg[i][j];
           }
       }
       int c=75,p;
       bool nf=true;
       while(c--){
           cin>>p;
           if(nf){
               if(isBingo(p,bg,f)){
                   nf=false;
                   cout<<"BINGO after "<<75-c<<" numbers announced"<<endl;
               }
           }
       }
    }
}