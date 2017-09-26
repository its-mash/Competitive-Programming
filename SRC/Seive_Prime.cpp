#include <bits/stdc++.h>
using namespace std;


const int n=1000000;
bool prime[n+1];


void primeGen()
{
    memset(prime,true,sizeof prime);

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p])
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}


int main(){
    primeGen();
    prime[1]=0;
    prime[0]=0;
    int a,b;
    while(cin>>a>>b){
        int bg=-1,en=-1,ma=-1,mb=-1,min=1000001,i;
        for(i=a;i<b;i++){
            if(prime[i]){
                bg=i;
                ma=i;
                break;
            }
        }
        if(bg!=-1){
            int last=ma;
            for(i++;i<=b;i++){
                if(prime[i]){
                    en=i;
                    if(i-last<min){
                        min=i-last;
                        mb=i;
                        ma=last;
                    }
                    last=i;
                }
            }
            if(en!=-1){
                cout<<"Closest = "<<ma<<","<<mb<<" and Furthest: "<<bg<<","<<en<<endl;
            }
            else{
                cout<<"No two primes exist"<<endl;
            }
        }
        else{
            cout<<"No two primes exist"<<endl;
        }
    }

}
