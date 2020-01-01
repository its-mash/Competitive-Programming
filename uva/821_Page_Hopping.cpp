#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("in","r",stdin);
	int x,y,cs=1;
	while(cin>>x>>y && x){
		const int n=101;
		bool fn[n]={};
		int c=max(x,y);
		//cout<<c<<endl;
		int ex[n][n];
		for(int i=1;i<n;i++){
			for(int j=1;j<n;j++)
				if(i!=j)
					ex[i][j]=201;
				else
					ex[i][j]=0;
		}
		ex[x][y]=1;
		fn[x]=fn[y]=true;
		while(cin>>x>>y && x){
			ex[x][y]=1;
			c=max(c,max(x,y));
			fn[x]=fn[y]=true;
		}
		for(int k=1;k<=c;k++){
			for(int i=1;i<=c;i++){
				for(int j=1;j<=c;j++){
					if(ex[i][k]+ex[k][j] < ex[i][j])
						ex[i][j]=ex[i][k]+ex[k][j];
				}
			}

		}
		double sum=0;
		for(int i=1;i<=c;i++){
			for(int j=1;j<=c;j++){
				//cout<<ex[i][j]<<" ";
				if(ex[i][j]!=201)
				 	sum+=ex[i][j];
			}
			//cout<<endl;
		}
		//cout<<sum<<endl;
		int e=accumulate(fn,fn+c+1,0);
		//cout<<"E:"<<e<<endl;
		cout<<"Case "<<cs++<<": average length between pages = "<<setprecision(3)<<fixed<<sum/(e*(e-1)) <<" clicks"<<endl;
	}
}