#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ex[n],maxx[n-2];
    for(int i=0;i<n;i++)
        cin>>ex[i];

    for(int i=1;i<n-1;i++){
        int m=0;
        for(int j=0;j<n-1;j++){
            if(i==j+1)
                m=max(m,ex[j+2]-ex[j]);
            else{
                m=max(m,ex[j+1]-ex[j]);
            }
        }
        maxx[i-1]=m;
    }
    int minn=maxx[0];
    for(int i=1;i<n-2;i++)
        minn=min(maxx[i],minn);
    cout<<minn<<endl;

}
