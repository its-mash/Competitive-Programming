#include <bits/stdc++.h>
using namespace std;

int d[1000001];

int main(){

    for(int i=2;i<=1000000;i++){
        for(int j=i;j<1000001;j+=i)
            d[j]++;
    }

    int a,b,c;
    long long ans=0;
    cin>>a>>b>>c;
    int ex[a*b*c];
    for(int i=1;i<=b;i++){
        int x=c*(i-1)-1;
        for(int j=1;j<=c;j++)
            ex[x+j]=i*j;
    }
    for(int i=1;i<=a;i++){
        int x=b*c*(i-1);
        for(int j=0;j<b*c;j++){
            ex[x+j]=ex[j]*i;
        }
    }
    for(int i=0;i<a*b*c;i++)
        ans+=d[ex[i]]+1;
    cout<<(ans%(1<<30))<<endl;
}
