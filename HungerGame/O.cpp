#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int M=10000001;

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
}


string isPal(ll x){
	string pa="",al="";
	while(x){
		// cout<<x<<endl;
		if(x%2==0){
			pa+='0';al='0'+al;
		}
		else{
			pa+='1';al='1'+al;	
		}
		x/=2;
		// cout<<pa<<" "<<al<<endl;
	}
	if(pa==al){
		return pa;
	}
	return "";
}

int main(){
	seiveOptimized(10000000);
	// freopen("in","r",stdin);
	
	string ex;
	while(cin>>ex){
		
		bitset<25> bn(ex);
		ll x=bn.to_ulong();
		while(1){
			// cout<<x<<"::"<<isPrime(x)<<">> "<<isPal(x)<<endl;
			string pa=isPal(x);
			if(isPrime(x) && pa!=""){
				cout<<pa<<endl;
				break;

			}
			// cout<<x<<endl;
			x++;
		}
	}
}