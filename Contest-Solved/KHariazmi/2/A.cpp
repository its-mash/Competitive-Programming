#include <iostream>
#include <cstdio>
using namespace std;

const int r=6;

void solve(int ex[],int start,int end,int com[],int index){
    if(index==r){
        cout<<com[0];
        for(int i=1;i<r;i++)
            cout<<" "<<com[i];
        cout<<endl;
        return;
    }
    for(int i=start;i<=end-r+index;i++){
        com[index]=ex[i];
        solve(ex,i+1,end,com,index+1);
    }
}

int main(){
    //freopen("input","r",stdin);
    int k;
    cin>>k;
    while(k!=0){
        int ex[k], com[r];
        for(int i=0;i<k;i++)
            cin>>ex[i];
        solve(ex,0,k,com,0);
        cin>>k;
        if(k!=0)
            cout<<endl;
    }
}
