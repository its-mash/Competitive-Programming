#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--) {
     char ex[9][9];
     for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
           cin>>ex[i][j];
        }
     }
     for(int i=0;i<9;i++){
        char v=(ex[i][i]+1-'0')>9 ? ex[i][i]-1:ex[i][i]+1;
        ex[i][i]=v;
     }
     for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
           cout<<ex[i][j];
        }
        cout<<endl;
     }
  }
}