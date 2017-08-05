#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,maxx=0;
    cin>>n>>a>>b>>c;
    for(int i=0;i*a<=n;i++){
        for(int j=0;j*b<=n-i*a;j++){
            int temp=(n-(i*a+j*b));
            if(temp%c==0){
                maxx=max(maxx,i+j+(temp/c));
              //  cout<<i<<"* a + "<<j<<" * b + "<<temp/c<<" *c "<<endl;
            }
        }
    }
    cout<<maxx<<endl;

}
