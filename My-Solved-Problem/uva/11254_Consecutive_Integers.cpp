#include <bits/stdc++.h>
using namespace std;



int main(){
	//freopen("in","r",stdin);
	
	long long n;
	while(cin>>n && n>0){
		
		long long x=sqrt(n*2.0);

		while((2*n-x*x +x)%(2*x)!=0){
			
			x--;
			
		}
		long long  b=(2*n-x*x +x)/(2*x);
		cout<<n<<" = "<<b<<" + ... + "<<b+x-1<<endl;
	}
}


// CSC 4604	1	CRYPTOGRAPHY	3	
// T-TH	2 - 3.20 PM	ICT LR 19 LEVEL 4C	PROF. DR. IMAD FAKHRI TAHA ALYASEEN

// CSC 4309	1	NATURAL LANGUAGE PROCESSING	3	
// M-W	11.30 - 12.50 AM	ICT LR 19 LEVEL 4C	DR. SURIANI BT. SULAIMAN

// CSC 4605	1	DIGITAL EVIDENCE FORENSICS	3	
// M-W	8.30 - 9.50 AM	ICT TL-C4-03 LEVEL 4C	ASSOC. PROF NORMAZIAH BINTI ABDUL AZIZ