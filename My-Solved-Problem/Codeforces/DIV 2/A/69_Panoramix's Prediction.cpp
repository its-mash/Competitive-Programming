#include <bits/stdc++.h>
using namespace std;


const int n=50;
bool prime[n+1];

void primeGen()
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}


int main(){
    primeGen();
    int n,m;
    cin>>n>>m;
    if(prime[m]==false){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=n+1;i<m;i++){
        if(prime[i]==true){
            cout<<"NO"<<endl;return 0;
        }

    }
    cout<<"YES"<<endl;
}
