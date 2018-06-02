#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	int ex[n],cc=0;
	for(int i=0;i<n;i++)
		cin>>ex[i];
	vector<int> lhs,rhs;

	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			for(int c=0;c<n;c++){
				lhs.push_back(ex[a]*ex[b]+ex[c]);
				if(ex[a]!=0)
					rhs.push_back(ex[a]*(ex[b]+ex[c]));

			}
		}
	}
	sort(rhs.begin(),rhs.end());
	pair<vector<int>::iterator,vector<int>::iterator > range;
	for(int i=0;i<lhs.size();i++){
		range=equal_range(rhs.begin(),rhs.end(),lhs[i]);
		// cout<<range.second-range.first<<endl;
		cc+=range.second-range.first;
	}
	cout<<cc<<endl;
}