#include <bits/stdc++.h>
using namespace std;

int main(){
    int ex[2][100]={};
    string h,a;
    cin>>h>>a;
    int n;
    cin>>n;
    while(n--){
        int t,m;
        char tm,c;
        cin>>t>>tm>>m>>c;
        if(tm=='h'){
            if((c=='r' && ex[0][m]!=-1) || ex[0][m]==1){
                cout<<h<<" "<<m<<" "<<t<<endl;
                ex[0][m]=-1;
            }
            else if(ex[0][m]==0){
                ex[0][m]++;
            }
        }
        else{
            if((c=='r' && ex[1][m]!=-1) || ex[1][m]==1){
                cout<<a<<" "<<m<<" "<<t<<endl;
                ex[1][m]=-1;
            }
            else if(ex[1][m]==0){
                ex[1][m]++;
            }
        }
    }
}
