#include <iostream>
using namespace std;

int main(){
    string ex[4];
    string ans="NO";
    for(int i=0;i<4;i++)
        cin>>ex[i];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int a=0,d=0;
            if(ex[i][j]=='.')
                d++;
            else
                a++;
            if(ex[i+1][j+1]=='.')
                d++;
            else
                a++;
            if(ex[i][j+1]=='.')
                d++;
            else
                a++;
            if(ex[i+1][j]=='.')
                d++;
            else
                a++;
            if(a>=3 || d>=3){
                cout<<"YES"<<endl;return 0;
            }

        }

    }
    cout<<"NO"<<endl;
}

