#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    map<string,int> john;
    cin>>n;
    for(int i=0;i<n;i++){
        string e;
        cin>>e;
        john[e]=1;
    }
    cin>>m;
    while(m--){
        string e;
        cin>>e;
        john[e]++;
    }
    int count=0;
    for(map<string,int>::iterator it=john.begin();it!=john.end();it++){
        if(it->second==2){
            count++;
            //cout<<it->first<<" "<<it->second<<endl;
        }
       // cout<<it->first<<" "<<it->second<<endl;

    }
    cout<<(((double)count/n)*100>=50 ? "Forever Dead":"Alive")<<endl;
    return 0;
}
