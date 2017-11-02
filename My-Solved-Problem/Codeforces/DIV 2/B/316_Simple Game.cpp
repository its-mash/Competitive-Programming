#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int mid =n/2+1;
    //cout<<"MID "<<mid<<endl;
    if(n==1)
        cout<<1<<endl;
    else if(m<mid)
        cout<<m+1<<endl;
    else
        cout<<m-1<<endl;
}
