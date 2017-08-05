#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r,x,c=0;
    cin>>n>>l>>r>>x;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    sort(ex,ex+n);
    int p=1<<n;
    for(int i=3;i<p;i++){

        int s=0,t=0,b=-1,e;
        for(int j=0;j<n;j++){
            if(i & 1<<j){
                s++;
                t+=ex[j];
                if(b==-1)
                    b=ex[j];
                e=ex[j];
               // cout<<ex[j];
            }
        }
        //cout<<endl<<s<<" "<<t<<" "<<b<<" "<<e<<endl;
        if(t>=l && t<=r && e-b>=x && s>1)
            c++;
    }
    cout<<c<<endl;
}
