#include <bits/stdc++.h>
using namespace std;

long long levell(long long x){
	long long i=1;
	while((i+2)*(i+2) < x )
		i+=2;
	return i;
}
int main(){
	long long n,s;
	while(cin>>n>>s && n && s){

		long long rw,cl, p=levell(s),c=ceil((s-p*p)*1.0/(p+1));
		//cout<<p<<" "<<c<<endl;
		if(s==1)
		{
			rw=ceil(n/2.0);
			cl=ceil(n/2.0);
		}
		else if(c==1){
			rw=p+1+(n-p)/2;
			cl=p*p+(p+1)-s+(n-p)/2;
		}
		else if(c==2){
			rw=p*p+c*(p+1)-s+(n-p)/2;
			cl=(n-p)/2;	
		}
		else if(c==3){
			rw=(n-p)/2;
			cl=s-(p*p+(c-1)*(p+1))+(n-p)/2;
		}
		else{
			rw=s-(p*p+(c-1)*(p+1))+(n-p)/2;;
			cl=p+1+(n-p)/2;
		}
		cout<<"Line = "<<rw<<", column = "<<cl<<"."<<endl;

	}

}