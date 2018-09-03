#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n && n){
		int maxUntil=INT_MIN,maxEndingHere=0;
		while(n--){
			int t;cin>>t;
			maxEndingHere+=t;
			if(maxEndingHere>maxUntil)
				maxUntil=maxEndingHere;
			if(maxEndingHere<0)maxEndingHere=0;
		}
		if(maxUntil>0)
			cout<<"The maximum winning streak is "<<maxUntil<<"."<<endl;
		else
			cout<<"Losing streak."<<endl;
	}
}
