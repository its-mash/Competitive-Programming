#include <bits/stdc++.h>
using namespace std;
map<char,char> bc;
int main(){
	bc['{']='}';
	bc['(']=')';
	bc['[']=']';
	bc['<']='>';

	string ex;cin>>ex;
	stack<char> st;
	int c=0;
	for(int i=0;i<ex.length();i++){
		if(ex[i]=='[' || ex[i]=='<' || ex[i]=='{' || ex[i]=='('){
			st.push(ex[i]);
		}
		else if(!st.empty())
		{
			char ch=st.top();st.pop();
			if(bc[ch]!=ex[i])c++;
		}
		else{
			cout<<"Impossible"<<endl;
			return 0;
		}
	}
	if(!st.empty())
		cout<<"Impossible"<<endl;
	else 
		cout<<c<<endl;
}
