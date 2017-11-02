#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    string st[]={"chest","biceps","back"};
    cin>>n;
    int ex[3]={};
    for(int i=0,j=0;i<n;i++,j++){
        cin>>t;
        ex[j%3]+=t;
    }
    int ans;
    ans=(ex[0]>ex[1])? 0:1;
    ans=(ex[ans]>ex[2])?ans:2;
    cout<<st[ans]<<endl;

}
