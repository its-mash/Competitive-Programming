#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,num;
    cin>>a;
    num=a;
    int i=1;
    while(1){
        num=a+i;
        while(num){
            int t=num%10;
            if(t==8 || t== -8)
            {
                cout<<i<<endl;return 0;
            }
            num/=10;
        }
        i++;
    }

}
