#include <bits/stdc++.h>
using namespace std;

void solve(string ex,int ln){
	int cc[26]={};
	for(int i=0;i<ln;i++){
		cc[ex[i]-'a']++;
	}	
	int od=0;
	string os="";
	for(int i=0;i<26;i++){
		if(cc[i]%2==1){
			od++;
			os+=i+'a';
		}
	}
	for(int i=0;i<os.length()/2;i++){
		cc[os[i]-'a']++;	
		cc[os[os.length()-i-1]-'a']--;
	}
	string f="",m="";
	for(int i=0;i<26;i++){
		f+=string(cc[i]/2,i+'a');	
		if(cc[i]%2==1)m+=i+'a';
	}
	cout<<f;
	cout<<m;
	reverse(f.begin(),f.end());
	cout<<f<<endl;	
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	string ex;
	cin>>ex;
	solve(ex,ex.length());
}

