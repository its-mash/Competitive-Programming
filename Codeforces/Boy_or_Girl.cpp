#include <bits/stdc++.h>
using namespace std;

int main(){
	string ex;
	cin>>ex;
	set<char> d;
	for(int i=0;i<ex.length();i++)
	{
		d.insert(ex[i]);
	}
	cout<<((d.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!")<<endl;
}