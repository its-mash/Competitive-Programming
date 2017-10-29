#include <bits/stdc++.h>
using namespace std;


// void visit(vector<int> ex[],bool vis[],int n,int i,vector<string> bear){
// 	vis[i]=true;

// 	for(int j=0;j<ex[i].size();j++)
// 		if(!vis[ex[i][j]]){
// 			visit(ex,vis,n,ex[i][j],bear);
// 		}
	
// 	cout<<" "<<bear[i];
// }
// int main(){
// 	freopen("in","r",stdin);
// 	freopen("out","w",stdout);
// 	int n,cs=1;
// 	while(cin>>n){
// 		n++;
// 		vector<string> bear(n,"");
// 		map<string,int> track;
// 		for(int i=1;i<n;i++){
// 			string tm;
// 			cin>>tm;
// 			bear[i]=tm;
// 			track[tm]=i;
// 		}
		
// 		int m;
// 		vector<int> ex[n];
// 		cin>>m;
// 		while(m--){
// 			string l,r;
			
// 			cin>>l>>r;
// 			ex[track[r]].push_back(track[l]);
// 		}

// 		bool vis[n]={};
// 		cout<<"Case #"<<cs++<<": Dilbert should drink beverages in this order:";	
// 		for(int i=1;i<n;i++){
// 		 	if(!vis[i]){
// 				visit(ex,vis,n,i,bear);
// 			}
// 		}
// 		cout<<"."<<endl<<endl;

// 	}
// }

int main(){
	// freopen("in","r",stdin);
	// freopen("out","w",stdout);
	int n,cs=1;
	while(cin>>n){
		n++;

		vector<string> bear(n,"");
		map<string,int> track;
		for(int i=1;i<n;i++){
			string tm;
			cin>>tm;
			bear[i]=tm;
			track[tm]=i;
		}
		
		int m,ind[n]={};
		vector<int> ex[n];
		cin>>m;
		while(m--){
			string l,r;
			
			cin>>l>>r;
			ex[track[l]].push_back(track[r]);
			ind[track[r]]++;
		}
		// for(int i=1;i<n;i++)
		// 	cout<<ind[i]<<" ";
		// cout<<endl;
		priority_queue<int, vector<int>,greater<int> > qu;
		for(int i=1;i<n;i++){
		 	if(ind[i]==0){
		 		//cout<<i<<endl;
				qu.push(i);
			}
		}

		cout<<"Case #"<<cs++<<": Dilbert should drink beverages in this order:";
		while(!qu.empty()){
			int k=qu.top();qu.pop();
			cout<<" "<<bear[k];
			for(int i=0;i<ex[k].size();i++){
				ind[ex[k][i]]--;
				if(ind[ex[k][i]]==0)
					qu.push(ex[k][i]);
			}
		}
		cout<<"."<<endl<<endl;


	}
}