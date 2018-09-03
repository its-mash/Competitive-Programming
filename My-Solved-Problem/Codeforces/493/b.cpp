#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,b;cin>>n>>b;
	int l,r,o=0,e=0;

	vector<int> cs;
	bool f=false;
	while(n--){

		cin>>r;
		if(f){
			f=false;
			cs.push_back(abs(l-r));
//			cout<<l<<" "<<r<<endl;
		}	

		if(r&1)o++;
		else e++;
		if(e==o){
			l=r;
			f=true;
		}
	}
	sort(cs.begin(),cs.end());
	int c=0;
	for(auto x: cs){
		if(b-x>=0){
			c++;
			b-=x;
		}else
			break;
	}
	cout<<c<<endl;
}
