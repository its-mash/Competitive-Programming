#include <bits/stdc++.h>
using namespace std;


int n=50;
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

/*    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";*/
}


int main(){

}
