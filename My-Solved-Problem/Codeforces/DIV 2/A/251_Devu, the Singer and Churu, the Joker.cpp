#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int c=n,sum=0;
    while(c--){
        int t;
        cin>>t;
        sum+=t;
    }
    if(sum+(n-1)*10 > d){
        cout<<-1<<endl;
    }
    else{
        cout<<((d-sum)/5)<<endl;
    }

}
