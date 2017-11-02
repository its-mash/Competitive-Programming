#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        char c;
        cin>>a>>c>>b;
        a=11-a+(b==0);
        if(a<=0)
            a=a+12;
        if(a!=0)
            b=60-b;
        if(b==60)
            b=0;
        printf("%02d:%02d\n",a,b);
    }

}
