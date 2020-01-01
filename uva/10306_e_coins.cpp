#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	while(n--){
		int m,s;
		cin>>m>>s;

		int dp[s+1][s+1];
		for(int i=0;i<=s;i++)
			for(int j=0;j<=s;j++)
				dp[i][j]=-1;

		dp[0][0]=0;

		int cn[m][2];
		for(int i=0;i<m;i++){
			cin>>cn[i][0]>>cn[i][1];
		}


		for(int i=0;i<=s;i++){
			for(int j=0;j<=s;j++){
				for(int k=0;k<m;k++){
					int nx=i-cn[k][0],ny=j-cn[k][1];
					if(nx>=0 && ny>=0 && dp[nx][ny]!=-1 && (dp[i][j]==-1 || dp[nx][ny]+1<dp[i][j])){
						dp[i][j]=dp[nx][ny]+1;

					}
				}
			}
		}
//		for(int i=0;i<=s;i++){
//			for(int j=0;j<=s;j++)
//				cout<<dp[i][j]<<" ";
//			cout<<endl;
//		}
//		cout<<"-------------------"<<endl;
		int ans=INT_MAX;
		for(int x=0;x<=s;x++){
			int y=sqrt(s*s-x*x);
			if(y*y+x*x==s*s){
//				cout<<x<<" "<<y<<endl;
				int st=dp[x][y];
				if(st!=-1 && st<ans)
					ans=st;
			}
		}
		if(ans!=INT_MAX)
			cout<<ans<<endl;
		else
			cout<<"not possible"<<endl;
	}
}
