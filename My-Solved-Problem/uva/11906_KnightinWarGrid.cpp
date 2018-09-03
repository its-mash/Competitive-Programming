#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("in","r",stdin);
	int t,cc;
	cin>>t;
	cc=t;
	while(t--){
		int r,c,m,n,w,x,y;
		cin>>r>>c>>m>>n;
		cin>>w;
		int ex[r][c]={};
		bool vs[r][c]={};
		while(w--){

			cin>>x>>y;
			ex[x][y]=-1;
		 }
		stack<pair<int,int> > st;
		st.push(make_pair(0,0));
		int even=0,odd=0;
		int dirx[]={m,m,-m,-m,n,n,-n,-n};
		int diry[]={n,-n,n,-n,m,-m,m,-m};
		while(!st.empty()){

			pair<int,int> tm=st.top();
			st.pop();
			x=tm.first,y=tm.second;
			if(vs[x][y])
				continue;
			vs[x][y]=true;
			bool nvsit[r][c]={};
			//cout<<"point "<<x<<"="<<y<<endl;
			int tstep=0;
			for(int i=0;i<8;i++){
				int nx=x+dirx[i],ny=y+diry[i];
				if(nx>=0 && nx<r && ny>=0 && ny<c && ex[nx][ny]!=-1 && !nvsit[nx][ny] ){	
					
					//cout<<nx<<", "<<ny<<endl;
					tstep++;
					nvsit[nx][ny]=true;	
					
					if(!vs[nx][ny])
						st.push(make_pair(nx,ny));

				}
			}
			if( tstep%2==0)
				even++;
			else
				odd++;
			//cout<<endl;

		}
		
		cout<<"Case "<<cc-t<<": "<<even<<" "<<odd<<endl;

		// for(int i=0;i<r;i++){
		// 	for(int j=0;j<c;j++){
		// 		//cout<<ex[i][j]<<" ";
		// 		if(ex[i][j]>0){
		// 			(ex[i][j]%2==0)?even++:odd++;
				
		// 		}
		// 	}
		// 	//cout<<endl;

		// }
		// if(even==0 && odd==0)
		// 	cout<<"Case "<<cc-t<<": "<<1<<" "<<odd<<endl;	
		// else 
		// 	cout<<"Case "<<cc-t<<": "<<even<<" "<<odd<<endl;

	}
}