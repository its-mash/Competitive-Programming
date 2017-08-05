#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,wa=0,wb=0,d=0;
    cin>>a>>b;
    for(int i=1;i<7;i++){
        if(abs(a-i)<abs(b-i))
            wa++;
        else if(abs(a-i)==abs(b-i))
            d++;
        else
            wb++;

    }
    cout<<wa<<" "<<d<<" "<<wb<<endl;
}
