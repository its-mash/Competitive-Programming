#include <bits/stdc++.h>
using namespace std;
const int sz=9800;


string getInd(int n){
	if(n%10==1 && n%100!=11){
		return "st";
	}
	else if(n%10==2 && n%100!=12)
		return "nd";
	else if(n%10==3 && n%100!=13)
		return "rd";
	else
		return "th";
}

int main(){
	//freopen("out","w",stdout);
	set<long long> ex;
	ex.insert(2);
	ex.insert(3);
	ex.insert(5);
	ex.insert(7);
	bool tr=true;

	while(ex.size()<=sz && tr){
		set<long long> fx;
		
		for(auto it=ex.begin();it!=ex.end() && tr;it++){
			//cout<<*it<<endl;
			for(auto jt=ex.begin();jt!=ex.end() && tr;jt++){
				//cout<<*jt<<" ";
				
				if((*it)*(*jt) <=2000000000)
					fx.insert((*it)*(*jt));
				else
					break;
				if(ex.size()+fx.size() >=sz)
					tr=false;
			}
		}
		ex.insert(fx.begin(),fx.end());
	}
	ex.insert(1);
	int in;
	while(cin>>in && in!=0){
		
		cout<<"The "<<in<<getInd(in)<<" humble number is "<<*next(ex.begin(),in-1)<<"."<<endl;
	}
	
	
}