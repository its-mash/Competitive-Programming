#include <iostream>
using namespace std;

#define ll long long

ll gcd(ll a,ll b){
	if(b==0 || a==0)
		return a+b;
	return gcd(b,a%b);
}

int main(){
	ll n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		string ex;
		getline(cin,ex);
		istringstream iss(ex);
	
		ll nn[101],x,ind=0;
		while(iss>>x)
			nn[ind++]=x;
		ll gc=-1;
		for(int j=0;j<ind-1;j++){
			for(int k=j+1;k<ind;k++)
				gc=max(gcd(nn[k],nn[j]),gc);
		}
		cout<<gc<<endl;
	}
}