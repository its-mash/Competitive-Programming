#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int f,l;
		bool ff[n]={};
		cin>>f;
		int c=n;
		while(--n){
			cin>>l;
			if(abs(f-l)<c)
				ff[abs(f-l)]=true;
			f=l;
		}
		ff[0]=false;
//		for(int i=0;i<c;i++)
//			cout<<ff[i]<<endl;
//		cout<<endl;
		int s=accumulate(ff,ff+c,0);
		cout<<((s==c-1)?"Jolly":"Not jolly")<<endl;
	}	
}
