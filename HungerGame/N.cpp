#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double


int main(){
	// freopen("in","r",stdin);
	// freopen("out","w",stdout);
	int t;
	cin>>t;

	while(t--){
		int n,x1,y1,x2,y2,x3,y3,x4,y4,xmx=-1001,xmn=1001,ymx=-1001,ymn=1001;
		cin>>n;
		
		while(n--){
			cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
			xmn=min(xmn,min(x1,min(x2,min(x3,x4))));
			ymn=min(ymn,min(y1,min(y2,min(y3,y4))));
			xmx=max(xmx,max(x1,max(x2,max(x3,x4))));
			ymx=max(ymx,max(y1,max(y2,max(y3,y4))));

		}
		// cout<<
		int l=xmx-xmn,w=ymx-ymn;
		cout<<l*w<<endl;
	}

	
}