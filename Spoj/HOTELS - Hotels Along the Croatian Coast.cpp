#include <bits/stdc++.h>
using namespace std;

int ind=0;

int getIndex(long long ex[],int k,int b,int e,int i){

    if(b>e)
        return ind;
    int mid=(b+e)/2;
    if(ex[mid]-ex[i]<=k){
        ind=mid;
        getIndex(ex,k,mid+1,e,i);
    }
    else{
        getIndex(ex,k,b,mid-1,i);
    }

}

int main(){
    int n,m,max=0,l=1;
    cin>>n>>m;
    long long ex[n+1];
    ex[0]=0;
    for(int i=1;i<=n;i++){
        cin>>ex[i];
        ex[i]+=ex[i-1];
    }
    for(int i=0;i<n && l!=n;i++){
        l=getIndex(ex,m,l,n+1,i);
        if(ex[l]-ex[i]>max)
            max=ex[l]-ex[i];
    }
    cout<<max<<endl;


}
