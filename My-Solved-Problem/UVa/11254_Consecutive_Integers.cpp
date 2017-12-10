#include <bits/stdc++.h>
using namespace std;



int main(){
	freopen("in","r",stdin);
	int n;
	while(cin>>n && n>0){
	
		int e=int(sqrt(n*2.0)),b=int(sqrt(abs(e*(e+1)-n*2)));

		int c=0;
		while((e*(e+1))-b*(b+1)!=n*2 && b!=e ){
			cout<<b<<"-- "<<e<<endl;
			e++;
			b=int(sqrt(e*(e+1)-n));
			c++;
			
		}
		cout<<n<<" = "<<((b!=e)?b+1:b)<<" + ... +  "<<e<<endl;
	}
}