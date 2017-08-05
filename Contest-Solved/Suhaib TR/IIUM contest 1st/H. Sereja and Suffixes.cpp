#include <bits/stdc++.h>
using namespace std;

bool fx[100000];

int main(){
    int n,m,c=0;
    cin>>n>>m;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    for(int i=n-1;i>=0;i--){
        if(!fx[ex[i]]){
            c++;
            fx[ex[i]]=1;
        }
        ex[i]=c;
    }
    while(m--)
    {
        int l;
        cin>>l;
        cout<<ex[l-1]<<endl;
    }
}
