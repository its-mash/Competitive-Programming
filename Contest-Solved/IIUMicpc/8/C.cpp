#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    for(int i=0;i<6;i++)
    {
        int t;
        cin>>t;
        sum+=t;
    }
    if(sum<=6)
        cout<<"Bad"<<endl;
    else if(sum<=12)
         cout<<"Okay"<<endl;
    else if(sum<=18)
         cout<<"Good"<<endl;
    else
         cout<<"Excellent"<<endl;
}
