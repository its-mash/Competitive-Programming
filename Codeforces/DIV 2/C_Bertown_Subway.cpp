#include <bits/stdc++.h>

using namespace std;


int main(){

	//freopen("in","r",stdin); 
	long long n,ans=0;
	cin>>n;
	n++;
	int ex[n];
	for(int i=1;i<n;i++)
		cin>>ex[i];

	bool vis[n]={};
	vector<int> tm;
	for(int i=1;i<n;i++){
		if(!vis[i]){
			vis[i]=true;
			int k=ex[i];
			int c=1;
			while(!vis[k]){
				vis[k]=true;
				c++;
				k=ex[k];
			}
			tm.push_back(c);
		}
	}
	sort(tm.begin(),tm.end());

	if(tm.size()>1){
		long long f,s;
		
		f=tm.back();tm.pop_back();
		s=tm.back();tm.pop_back();
		//cout<<f<<s<<endl;
		ans+=(f+s)*(f+s);

		//cout<<tm.size()<<" dd"<<endl;
		for(int i=0;i<tm.size();i++)
			ans+=tm[i]*tm[i];
		
	}
	else
		ans=tm[0]*tm[0];
	cout<<ans<<endl;
}	