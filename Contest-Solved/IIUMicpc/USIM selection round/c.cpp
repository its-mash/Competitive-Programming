
#include <iostream>
using namespace std;

int main(){
    int s[3]={0,1,2};
    int ex[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cin>>ex[i][j];
    }
    for(int i=0;i<2;i++){
        if(!((ex[i][0]<=ex[i][1] && ex[i][1]<=ex[i][2]) || (ex[i][0]>=ex[i][1] && ex[i][1] >=ex[i][2]))){
            int t=s[i];
            s[i]=s[2];
            s[2]=t;
        }
    }
    for(int i=0;i<3;i++){
        cout<<ex[s[i]][0]<<" "<<ex[s[i]][1]<<" "<<ex[s[i]][2]<<endl;
    }
}

