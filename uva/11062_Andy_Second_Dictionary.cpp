#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("in","r",stdin);
	set<string> ex;
	string pending="",temp;
	bool hypenation=false;
	while(getline(cin,temp)){
		//cout<<temp<<endl;
		string fx="";
		for(int i=0;i<temp.length();i++){
			
			if(isspace(temp[i])){
				ex.insert(pending+fx);
				pending="";
				fx="";
				hypenation=false;
				while(isspace(temp[i+1]))
					i++;
			}
			else if(isalpha(temp[i]))
			{
				if(!hypenation)
					fx+=tolower(temp[i]);
				else
					pending+=tolower(temp[i]);
			}
			else if(temp[i]=='-' ){
				if(i==temp.length()-1){
					hypenation=true;
					pending+=fx;
					fx="";
				}
				else{
					if(hypenation)
						pending+=tolower(temp[i]);
					else
						fx+=tolower(temp[i]);		
				}
			}
		}
	}
	for(auto it=ex.begin();it!=ex.end();it++)
		cout<<*it<<endl;
}