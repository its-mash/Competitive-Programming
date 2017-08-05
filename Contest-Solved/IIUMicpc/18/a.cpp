#include <bits/stdc++.h>
using namespace std;

int main(){
    long long h,w,l,pv,cv;
    cin>>h>>w>>l>>pv;
    cv=(h*w*l);
    if(pv/cv>=1000)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
