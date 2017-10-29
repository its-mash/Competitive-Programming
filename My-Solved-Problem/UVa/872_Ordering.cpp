#include <bits/stdc++.h>

using namespace std;



void dfs(vector<int> ex[],bool vis[],int ind[],vector<int> res,int n,string fx,bool& found){

		// for(int i=1;i<n;i++)
		// 	cout<<ind[i]<<" "<<vis[i]<<",";
		// cout<<"--------"<<endl<<endl;
	bool flag=false;
	for(int i=1;i<n;i++){

		if(ind[i]==0 && !vis[i]){
			res.push_back(i);
			//cout<<"dd"<<i<<ex[i].size()<<endl;
			for(int j=0;j<ex[i].size();j++){
				//cout<<ex[i][j]<<" ==  "<<ind[ex[i][j]]<<endl;
				ind[ex[i][j]]--;
				//cout<<ex[i][j]<<" ==  "<<ind[ex[i][j]]<<endl;

			}
			vis[i]=true;
			dfs(ex,vis,ind,res,n,fx,found);

			res.pop_back();
			for(int j=0;j<ex[i].size();j++){
				ind[ex[i][j]]++;
			}
			vis[i]=false;
			flag=true;
		}
	}
	if(!flag){
		if(res.size()==n-1){
			cout<<fx[res[0]-1];
			for(int i=1;i<res.size();i++){
				cout<<" "<<fx[res[i]-1];
			}
			cout<<endl;
			found=false;
		}
	
	}

}

int main(){
	//freopen("in","r",stdin);
	int t;
	cin>>t;
    cin.ignore();
	
	while(t--){
		cin.ignore();
		string ex,fx;
		getline(cin,ex);
		 //cout<<"|"<<ex<<endl;

		ex.erase(remove(ex.begin(),ex.end(),' '),ex.end());
		sort(ex.begin(), ex.end());
	
		int track[26],n=ex.size()+1;
		for(int i=0;i<ex.length();i++){
			track[ex[i]-'A']=i+1;
		}
		//cout<<track['F'-'A']<<endl;
		getline(cin,fx);
		istringstream is(fx);

		int ind[n+1]={};
		vector<int> adj[n+1];
		

		char x,y;
		while(is>>x>>y>>y){

			 adj[track[x-'A']].push_back(track[y-'A']);
			 ind[track[y-'A']]++;

		}
		// for(int i=1;i<n;i++){
		// 	cout<<adj[i].size()<<endl;
		// }
		//cout<<endl;
		bool vis[n]={},found=true;
		vector<int> res;
		dfs(adj,vis,ind,res,n,ex,found);
		if(found)
			cout<<"NO"<<endl;
		if(t!=0)cout<<endl;
	
	}


	
}







/*
		uisng adjacency matrix

		int ex[n+1][n+1]={};
		while(m--){
			int x,y;
			cin>>x>>y;
			ex[x][y]=1;
		}
		// for(int i=1;i<=n;i++){
		// 	for(int j=1;j<=n;j++){
		// 		cout<<ex[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		//}
		int ind[n+1]={};
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(ex[j][i])
					ind[i]++;
			}
		}
		int c=0;
		while(c<n){
			//cout<<c<<endl;
			queue<int> qu;
			for(int i=1;i<=n;i++){
				if(ind[i]==0){
					cout<<i<<" ";
					qu.push(i);
					c++;
					ind[i]--;

				}
			}
			while(!qu.empty()){
				int k=qu.front();qu.pop();
				for(int i=1;i<=n;i++)
					if(ex[k][i])ind[i]--;
			}
		}
		cout<<endl;


 */