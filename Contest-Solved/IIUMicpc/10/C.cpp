#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> ex[n];
    for(int i=0;i<n;i++){
        int t,m;
        cin>>t;
        ex[i].push(i+1);
        while(t--){
            cin>>m;
            ex[i].push(m);
        }
    }
    int k;
    cin>>k;
    int route[k];
    for(int i=0;i<k;i++)
        cin>>route[i];
    for(int i=0;i<k-1;i++){
        int r=route[i]-1;
        stack<int> tm=ex[r];
        bool b=true;
        while(!tm.empty()){
            if(tm.top()==route[i+1]){
                b=false;
                break;
            }
            tm.pop();
        }
        if(b){
            cout<<"This instruction will lead you astray"<<endl;return 0;
        }
    }
    cout<<"Instruction is OK"<<endl;

}
