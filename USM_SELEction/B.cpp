#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
int main()
{  
	string ex;
	cin>>ex;
	int cc[26]={};
	for(int i=0;i<ex.length();i++){
		cc[ex[i]-'a']++;
	}
	int mm=cc[0];
	for(int i=1;i<26;i++){
		if(mm<cc[i])
			mm=cc[i];
	}
	cout<<ex.length()-mm<<endl;
	
}



