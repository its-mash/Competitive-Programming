#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int,int> ex[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        ex[i]=make_pair(x,y);
    }
    sort(ex,ex+n);
    for(int i=0;i<n-1;i++){
        if(ex[i].second > ex[i+1].second){
            cout<<"Happy Alex"<<endl;return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
}
