#include <iostream>
using namespace std;

int main(){
    int n,m,c,r,e=0,nd=0;
    cin>>n>>m>>c>>r;
    string ex[n];

    for(int i=0;i<n;i++){
        cin>>ex[i];
    }
    for(int j=0;j<m;j++){
        if(ex[0][j]=='*')
            nd++;
        if(ex[n-1][j]=='*')
            nd++;
    }
    for(int i=1;i<n-1;i++){
        if(ex[i][0]=='*')
            nd++;
        if(ex[i][m-1]=='*')
            nd++;
        for(int j=1;j<m-1;j++){
            if(ex[i][j]=='X')
                e++;
        }
    }
    if(n==1)
        nd/=2;
   // cout<<nd<<"  "<<e<<endl;
    if(r<c){

        cout<<((nd<=e)? nd*r:((nd-e)*c+e*r))<<endl;

    }
    else
        cout<<nd*c<<endl;


}

