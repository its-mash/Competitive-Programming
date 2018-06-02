#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

#define M 1000001

bool marked[M];

bool isPrime(ll n) {

  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void seiveOptimized(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }

  // for (ll p=2; p<=n; p++)
  //   if (!marked[p] && isPrime(p))
  //    cout << p <<endl;

}

void seive(ll n)
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
    
    // for (ll p=2; p<=n; p++)
    //     if (prime[p])
    //      cout << p <<endl;

}
void mine(ll n){


	//int c=0;
	bool ex[n+1],sq=true;
	memset(ex, false, sizeof(ex));//marking all number as non prime

	ex[2]=true; ex[3]=true; //marking 2 & 3 as prime

	ll r=4;

	for(ll i=5;i<=n;i+=r){ // 
		ex[i]=!ex[i]; //flipping the current status of prime

		r=6-r; // value of r will be 2 then 4 then 2 and will continue this way. 


		// 5+2  = 7 is a prime,  r=2
		// 7+4  = 11 is a prime, r=4
		// 11+2 = 13 is a prime, r=2
		// 13+4 = 17 is a prime, r=4
		// 17+2 = 19 is a prime, r=2
		// 19+4 = 23 is a prime, r=4
		// 23+2 = 25 is NOT PRIME, r= 2
		// 25+4 = 29 is a prime, r=4
		// .
		// .
		// 33+2= 35 is NOT a prime, r=2
		// 53+2 = 55 is NOT a prime, r=2

		// So at first we are marking the possible prime number until n. 

		// Result is: 2 3 5 7 11 13 17 19 23 25 29 31 35 37 41 43 47 49 53 55 59 61 65 67 71 73 77 79 83 85 89 91 95 97
		// but there are some false prime in the above list like 25,35,55,65,49,77,91


		if(sq && ex[i]){ // sq is to check whether we reach sqrt(n)
			//if a number is not true prime, it's corresponding false prime won't be in our list
			// so no need to run false prime check if i is not a prime. 

			ll m=i*i,rc=i*(6-r),tt=i*6; 

		// 	// when i = 5, m=5*5 or 25. which is not prime number. with 25 if we add 10,
		// 	// we will get 35 which is not prime. Then if we add 20 with 35 which is 55 is not a prime.
		// 	// Then if we add 10 which is 65 is not a prime number but we marked them as prime number.

		// 	// so we need to add 10 once then 20 then 10 and so on to get the next prime number which
		// 	// we have added wrongly.

		// 	// when i = 7, m=7*7 or 49. which is not prime number. with 49 if we add 28 (7*4),
		// 	// we will get 77 which is not prime. Then if we add  with 14(7*2) which is 91 is 
		//  // not a prime number but we marked them as prime number.

		// 	// so we need to add 10 once then 20 then 10 and so on to get the next prime number which
		// 	// we have added wrongly.

			// for i= 5 tt= 5*6 =30 , rc= 5 * 4  =20

			// i  j    False prime
			// 5* 5     = 25, r for next prime is 2, rc=  30 - 20 = 10 , 35+10 =35
			// 5* 7     = 35, r for next prime is 4, rc=  30 - 10 = 20 , 35+20 =55
			// 5* 11    = 55, r for next prime is 2, rc=  30 - 20 = 10 , 35+10 =65
			// 5* 13    = 65, r for next prime is 4, rc=  30 - 10 = 20 , 35+20 =85
			

			// for i= 7 tt= 7*6 =42 , rc= 7 * 2  =14

			// i  j    False prime
			// 7* 7     = 49, r for next prime is 4, rc=  42 - 14 = 28 , 49+28 = 77
			// 7* 11    = 77, r for next prime is 2, rc=  42 - 28 = 14 , 77+14 = 91
			// 7* 13    = 91, r for next prime is 4, rc=  42 - 14 = 28 , 91+28 = 119


			sq = m<=n; // for i = 7 all prime number until next prime < 11*11= 121 are true prime
					   // in our list

			// following loop is to find the false prime and marked them true in advance
			// then the above iteration will make them false prime again.
			// we need to run this loop while i <= sqrt(n) as this will confirm that
			// all prime untill n are true prime	
			for(ll j=m;j<=n;j+=rc){
				ex[j]=true;
				rc=tt-rc;
			}
		}

	}

	// for(ll i=2;i<=n;i++)
	// 	if(ex[i])
	// 		cout<<i<<endl;

}





void eulerSeive(ll n) 
{
    vector<int> nums(n+1, 1);

    vector<int> next(n+1) ; //to get the next non-deleted value
    iota(next.begin(), next.end(), 1);

    vector<int> prev(n+1) ; //to get the prev non-deleted value
    iota(prev.begin(), prev.end(), -1);

    //out(nums);


    //int count = 0;
    for (size_t i = 2; i*i < nums.size(); i=next[i]) {
        int j = i;
        //cout << "\nCutting: " ;
        while ( i*j < nums.size() ) {
            //cout << i*j << " ";
            nums[i*j] = 0;

            j = next[j];
            
            if ( nums[j] == 0) {    //now adjust the next and prev
                next[prev[j]] = next[j];
                prev[next[j]] = prev[j];
            }

            //++count;
        } 
        //cout << "num of cuts: " << count;
        //out(nums);
        
    }

    // for (size_t i =2 ; i < nums.size(); ++i) {
    //     if (nums[i] == 1) {
    //         cout << i << " " ;
    //     }
    // }

}

int main(){
	freopen("out","w",stdout);
	clock_t begin,end;
	double elapsed_secs; 

	for(ll n=10,i=1;n<=1000000;n*=10,i++){

		begin= clock();
		seive(n);
		end = clock(); 

		elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		cout<<i<<" Until: "<<setw(10)<<n<<setw(20)<<" Seive : "<<setprecision(9)<<fixed<<elapsed_secs<<endl;

		begin = clock();
		mine(n);
		end = clock();
		
		elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		cout<<i<<" Until: "<<setw(10)<<n<<setw(20)<<" mine : "<<setprecision(9)<<fixed<<elapsed_secs<<endl;

		begin = clock();
		seiveOptimized(n);
		end = clock();
		
		elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		cout<<i<<" Until: "<<setw(10)<<n<<setw(20)<<" seiveOptimized : "<<setprecision(9)<<fixed<<elapsed_secs<<endl;
		

		begin = clock();
		eulerSeive(n);
		end = clock();
		
		elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		cout<<i<<" Until: "<<setw(10)<<n<<setw(20)<<" EulerSeive : "<<setprecision(9)<<fixed<<elapsed_secs<<endl;
		cout<<endl<<endl;
	}
}
