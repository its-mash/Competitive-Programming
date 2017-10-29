#include <bits/stdc++.h>

using namespace std;

// int main(){
// 	//freopen("in","r",stdin);
// 	int n;
// 	while(cin>>n && n){
// 		int l,x,y;
// 		cin>>l;

// 		vector<int> ex[n];

// 		while(l--){
// 			cin>>x>>y;
// 			//cout<<x<<" "<<y<<endl;
// 			ex[x].push_back(y);
// 		}

// 		int color[n];
// 		fill(color,color+n,-1);


// 		queue<int> qu;
// 		qu.push(0);
// 		color[0]=1;
// 		string ans="BICOLORABLE.";
// 		bool f=true;

// 		while(!qu.empty() && f){
			
// 			int x=qu.front(),sz=ex[x].size();qu.pop();

// 			for(int k=0;k<sz && f;k++){
// 				int nd=ex[x][k];
// 				if(color[nd]==-1){
// 					qu.push(nd);
// 					color[nd]=1-color[x];
									
// 				}
// 				else if(color[nd]==color[x]){
// 						ans="NOT BICOLORABLE.";
// 						f=false;
// 				}

// 			}

// 		}
// 		cout<<ans<<endl;
// 		//cout<<"dd"<<n<<endl;
// 	}
// }





int main(){
	//freopen("in","r",stdin);
	int n;
	while(cin>>n && n){
		int l,x,y;
		cin>>l;

		int ex[n][n]={};

		

		while(l--){
			cin>>x>>y;
			ex[x][y]=1;
			ex[y][x]=1;
		}


		int color[n];
		fill(color,color+n,-1);

		queue<int> qu;
		qu.push(0);
		color[0]=1;
		string ans="BICOLORABLE.";
		bool f=true;
		while(!qu.empty() && f){
			
			int x=qu.front();qu.pop();	
			for(int k=0;k<n && f;k++){

				if(ex[x][k] && color[k]==-1){
					qu.push(k);
					color[k]=1-color[x];
									
				}
				else if(ex[x][k] && color[k]==color[x]){
						ans="NOT BICOLORABLE.";
						f=false;
				}

			}

		}
		cout<<ans<<endl;
	}
}
 