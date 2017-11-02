#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,s,p;
    cin>>n>>s;
    int ex[n];
    bool bo[n];
    memset(bo,0, sizeof(bool)*n);
    for(int i=0;i<n;i++)
        cin>>ex[i];
    s--;
    p=s;
    while(1){
        //cout<<ex[p]-1<<"  "<< s<<endl;
        if(ex[p]-1==s)
        {
            cout<<"Yes"<<endl;return 0;
        }
        else if(bo[ex[p]-1]){
            cout<<"No"<<endl;return 0;
        }
        p=ex[p]-1;
        bo[p]=true;
    }
}
