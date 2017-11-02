#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b){
            int t=a;
            a=b;b=t;
        }
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            cout<<i<<" ";sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
        cin>>a>>b;
    }
}
