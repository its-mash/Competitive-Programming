#include <bits/stdc++.h>
using namespace std;

int  main()
{
    ios_base::sync_with_stdio(false);
    long long int k,l;
    cin>>k>>l;

    int i=1,c=k;
    while(k<=l){
        if(k==l){
            cout<<"YES"<<endl<<i-1<<endl;
            return 0;
        }
        i++;k=k*c;
    }

    cout<<"NO"<<endl;
}
