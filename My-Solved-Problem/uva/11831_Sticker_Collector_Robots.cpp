#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("in","r",stdin);
	int n,m,s;
	while(cin>>n>>m>>s && n!=0 && m!=0 && s!=0){
		char ex[n][m],ch;
		int dir;
		int r=0,c=0,ss=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>ex[i][j];
				if(ex[i][j]=='N' || ex[i][j]=='S' || ex[i][j]=='L' || ex[i][j]=='O'){
					r=i,c=j;
					if(ex[i][j]=='O')dir=0;
					if(ex[i][j]=='N')dir=1;
					if(ex[i][j]=='L')dir=2;
					if(ex[i][j]=='S')dir=3;
				}
				//cout<<ex[i][j]<<" ";
			}
			//cout<<endl;
		}
		//cout<<dir<<"="<<" "<<r<<","<<c<<endl;

		while(s--){
			cin>>ch;
			//cout<<ch<<"  dir"<<dir<<" == "<<r<<","<<c<<endl;
			
			if(ch=='D'){
				dir=(dir+1)%4;
			}
			else if(ch=='E'){

				dir=(dir==0)? 3:(dir-1)%4;
			}
			else if(ch=='F'){

				if(dir==0 && c-1>=0 && ex[r][c-1]!='#')c--;
				else if(dir==1 && r-1>=0 && ex[r-1][c]!='#')r--;
				else if(dir==2 && c+1 <m && ex[r][c+1]!='#')c++;
				else if(dir==3 && r+1 <n && ex[r+1][c]!='#')r++;



				if(ex[r][c]=='*'){
					ss++;
					ex[r][c]='.';
				}
			}
			//cout<<dir<<"="<<ch<<" "<<r<<","<<c<<endl;

		}
		//cout<<ch<<"  dir"<<dir<<" == "<<r<<","<<c<<endl;
		cout<<ss<<endl;
	}
}