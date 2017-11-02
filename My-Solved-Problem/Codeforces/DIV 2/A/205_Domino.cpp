#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,ls=0,rs=0,c;
    cin>>n;
    c=n;
    bool l=0,r=0;
    int lc=0,rc=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        ls+=x;rs+=y;
        if(x%2==0 && y%2==1){
            r=1;rc++;
        }

        else if(x%2==1 && y%2==0){
            l=1;lc++;
        }

    }
    //cout<<l<<r<<" "<<ls<<" "<<rs<<" "<<lc<<" "<<rc<<endl;
    if(ls%2==0 && rs%2==0)
        cout<<0<<endl;
    else if((ls+r)%2==0 && (rs+l)%2==0 && rc>=1 && lc>=1)
        cout<<1<<endl;
    else if((ls+r)%2==0 && (rs-1)%2==0 && rc>1)
        cout<<1<<endl;
    else if((ls-1)%2==0 && (rs+l)%2==0 && lc>1)
        cout<<1<<endl;
    else
        cout<<-1<<endl;



}
