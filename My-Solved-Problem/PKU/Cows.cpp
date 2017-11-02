#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t;
    ios_base::sync_with_stdio(false);
    scanf("%d",&t);
    while(t!=0){
        int ex[t][3];
        for(int i=0;i<t;i++){
            scanf("%d",&ex[i][0]);
            scanf("%d",&ex[i][1]);
            ex[i][2]=0;
        }
        for(int i=0;i<t-1;i++){
            for(int j=i+1;j<t;j++){
                if((ex[i][0]!=ex[j][0] || ex[i][0]!=ex[j][0])){
                    if(ex[i][0]>=ex[j][0] && ex[i][1]<=ex[j][1])
                        ex[i][2]++;
                    else if(ex[j][0]>=ex[i][0] && ex[j][1]<=ex[i][1])
                        ex[j][2]++;

                }
            }
        }
        for(int i=0;i<t;i++){
            printf("%d ",ex[i][2]);
        }
        printf("\n");
        scanf("%d",&t);
    }
}
