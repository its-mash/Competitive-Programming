#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long 

void primeGen(ll n)
{
   // int c=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    //memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p])
        {
            for (ll i=p*2; i<=n; i += p){
                prime[i] = false;
               // c++;
            }
           // cout<<p<<endl;
        }

        //c++;
    }
    
    for (ll p=2; p<=n; p++)
       if (prime[p])
         cout << p <<endl;

}


int main(){
     // for(ll n=10,i=1;n<=100000;n*=10,i++){
     //     clock_t begin = clock();
     //     primeGen(n);
     //     clock_t end = clock();
     //     double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
     //     cout<<i <<" Until: "<<setw(10)<<n<<" Time : "<<elapsed_secs<<endl;
     // }
        clock_t begin = clock();
        primeGen(1000);
        clock_t end = clock();
        double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
        cout<<" Time : "<<elapsed_secs<<endl;

}



// Time limit exceeded #stdin #stdout 5s 992768KB
// Success #stdin #stdout 0.99s 100816KB
// Time : 0.984127

// Success #stdin #stdout 0.07s 12964KB
// Time : 0.065008

// Success #stdin #stdout 0.01s 4556KB
// Time : 0.004469

// Success #stdin #stdout 0s 16160KB
// Time : 0.000436