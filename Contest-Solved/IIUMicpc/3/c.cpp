#include <bits/stdc++.h>
using namespace std;


int main(){

    bool prime[1000];

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=1000; i += p)
                prime[i] = false;
        }
    }
    int n;
    cin>>n;
    prime[0]=false;
    prime[1]=false;
    cout<<"Ordinary"<<endl;

    for(int i=2;i<=n;i++){

          //  cout<<prime[i]<<" "<<prime[i+2]<<" "<<prime[i-2]<<endl;
            if(!prime[i])
                cout<<"Ordinary"<<endl;
            else if(prime[i+2] || prime[i-2])
                cout<<"Twin"<<endl;
            else
                cout<<"Lonely Prime"<<endl;
    }
}
