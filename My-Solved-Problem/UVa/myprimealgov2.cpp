#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long 


void primeGen(ll n){


	//int c=0;
	bool ex[n+1]={};
	memset(ex, false, sizeof(ex));
	ex[2]=true;
	ex[3]=true;
	
	long long r=4;
	for(ll i=5;i<=n;i+=r){
		ex[i]=!ex[i];

		long long rc=r;
		r=6-r;

		for(ll j=i;i*j<=n;j+=rc){
			ex[j*i]=true;
			rc=6-rc;
			//c++;
		}
		//for(int j=i-1;j<=n;j+=)
		//c++;
	//	cout<<setw(4)<<x<<setw(5)<<i+5<<setw(5)<<i+1<<setw(5)<<i-1<<endl;
	}

	for(int i=2;i<=n;i++)
		if(ex[i])
			cout<<i<<endl;

}

int main(){
	// for(ll n=10,i=1;n<=100000;n*=10,i++){
	// 	clock_t begin = clock();
	// 	primeGen(n);
	// 	clock_t end = clock();
	// 	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	// 	cout<<i<<" Until: "<<setw(10)<<n<<" Time : "<<elapsed_secs<<endl;
	// }
		clock_t begin = clock();
		primeGen(1000);
		clock_t end = clock();
		double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		cout<<" Time : "<<elapsed_secs<<endl;

}


// Time limit exceeded	#stdin #stdout 5s 991744KB
// Success	#stdin #stdout 0.73s 100920KB
// Time : 0.72612

// Success	#stdin #stdout 0.04s 25000KB
// Time : 0.046619

// Success	#stdin #stdout 0s 4532KB
// Time : 0.003063

// Success	#stdin #stdout 0s 15336KB
// Time : 0.000328