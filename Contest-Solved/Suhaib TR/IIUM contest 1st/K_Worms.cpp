#include <bits/stdc++.h>
using namespace std;


int getIt(int ex[],int x,int b, int e){
    int mid=(b+e)/2;
    //cout<<b<<"----"<<e<<"  "<<x<<endl;
    if(ex[mid]==x)
        return mid;
    if(e-b < 2)
        return b;
    if(x<ex[mid]){
        getIt(ex,x,b,mid-1);
    }
    else{
        getIt(ex,x,mid+1,e);
    }
}


int main(){

    int n;
    cin>>n;
    int ex[n];
    cin>>ex[0];
    for(int i=1;i<n;i++){
        cin>>ex[i];
        ex[i]+=ex[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        int i=getIt(ex,x,0,n-1);
        //cout<<" ddd "<<i<<endl;
        for( ;i<n;i++){
            if(x<=ex[i]){
                cout<<i+1<<endl;break;
            }

        }
    }
}
