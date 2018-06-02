#include <bits/stdc++.h>
using namespace std;


int main(){
	cin.sync_with_stdio(false);
	int n,al=123;
	cin>>n;
	string ex;
	cin>>ex;
	vector<vector<int> > pos(al,vector<int>());
	for(int i=0;i<n;i++){
		pos[ex[i]].push_back(i);
	}
	int mc=n+1,p=0;
	for(int i=65;i<al;i++){
		int tm=pos[i].size();
		// cout<<char(i)<<"->"<<tm<<" ";
		if(tm!=0 && tm<mc){
			mc=tm;
			p=i;
			// cout<<p<<endl;
		}
	}
	for(int i=65;i<al;i++){
		cout<<char(i)<<"->";
		for(int j=0;j<pos[i].size();j++)
			cout<<pos[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	int ans=n;
	for(int i=0;i<pos[p].size();i++){
		int cp=pos[p][i];
		int l=cp,r=l;
		cout<<char(p)<<"----------------"<<cp<<endl;
		for(int j=65;j<al;j++){
			if(pos[j].size()==0 || j==p)
				continue;
			vector<int>::iterator ub=upper_bound(pos[j].begin(),pos[j].end(),cp);
			vector<int>::iterator lb=prev(ub);

			if(ub==pos[j].end()){
				l=(*lb<l)?*lb:l;
				cout<<"uend"<<endl;
			}
			else if(lb==prev(pos[j].begin())){
				r=(*ub>r)?*ub:r;
				cout<<"bgn"<<endl;
			}
			else{
				if(*lb<l && *ub>r){
					if(l-*lb<*ub-r)
						l=*lb;
					else
						r=*ub;
				}
				cout<<"bth"<<endl;

			}
			
			cout<<char(j)<<" "<<lb-pos[j].begin()<<" "<<ub-pos[j].begin()<<endl;
			cout<<l<<"<-->"<<r<<endl;
			cout<<(r-l+1)<<endl;
			cout<<endl;
		}
		ans=min(ans,r-l+1);

	}
	cout<<ans<<endl;
}	