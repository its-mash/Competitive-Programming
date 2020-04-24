#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d ",&t);
    char ch;
    while(t--){
        char ex[9][10];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
               scanf("%c",&ex[i][j]);
            scanf("%c",&ch);
        }
        for(int i=0;i<9;i++){
            int k=i*3%9+i/3;
            ex[i][k]=(ex[i][k]-'0'==9)?ex[i][k]-1:ex[i][k]+1;
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
               printf("%c",ex[i][j]);
            printf("\n");
        }
    }
}