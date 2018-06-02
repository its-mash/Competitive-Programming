#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string s;
	cin>>s;
	map<string,int> mp;
	for(int i=1;i<n;i++){
		string st="";
		st+=s[i-1];
		st+=s[i];
		mp[st]++;	
	}
	int m=-1;
	string ans="";
	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second>m){
			m=it->second;
			ans=it->first;
		}
	}
	cout<<ans<<endl;
}
