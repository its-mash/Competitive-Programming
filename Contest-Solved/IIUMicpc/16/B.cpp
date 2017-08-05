#include <bits/stdc++.h>
using namespace std;

int main(){
    int c=0,prime[]={0,1,-1, -1,4, -1,6, -1,8,9,10, -1,12,-1,14,15,16,-1,18,-1,20};
    for(int i=0;i<10;i++){
        int t;
        cin>>t;
        if(prime[t%21]==-1){
            c++;
            prime[t%21]=-2;
        }

    }
    cout<<c<<endl;
}
