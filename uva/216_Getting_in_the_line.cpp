#include <bits/stdc++.h>
using namespace std;

int n,vsa;
double dp[1<<8][8][2];
int nd[8][2];

double tsp(int mask,int s){
	if(mask==vsa){
		return 0;
	}
	if(dp[mask][s][0]!=-1){
		
		return dp[mask][s][0];
	}
	double ans=INT_MAX;
	int ds;
	for(int i=0;i<n;i++){
		if((mask & (1<<i))==0){
			double nans=16.0*+sqrt(1.0*(nd[s][0]-nd[i][0])*(nd[s][0]-nd[i][0])+(nd[s][1]-nd[i][1])*(nd[s][1]-nd[i][1]))+tsp((mask | (1<<i)),i);
			if(nans<ans){
				ans=nans;
				ds=i;
			}
		}
	}
//	cout<<mask<<">>"<<nd[ds][0]<<","<<nd[ds][1]<<"="<<(mask|1<<ds)<<endl;

	dp[mask][s][1]=ds;
	return dp[mask][s][0]=ans;
}
int main(){
	int cs=1;
	while(cin>>n && n){
		for(int i=0;i<n;i++){
			cin>>nd[i][0]>>nd[i][1];
		}
		vsa=(1<<n)-1;
		double fcost=INT_MAX;
		int ss;
		for(int tt=0;tt<n;tt++){

			for(int i=0;i<(1<<n);i++){
				for(int j=0;j<n;j++)
					dp[i][j][0]=-1;
			}
			double cost=tsp(1<<tt,tt);
			if(cost<fcost){
				fcost=cost;
				ss=tt;
			}
		}
		for(int i=0;i<(1<<n);i++){
			for(int j=0;j<n;j++)
				dp[i][j][0]=-1;
		}
		tsp(1<<ss,ss);
		cout<<fixed<<setprecision(2);
		cout<<"**********************************************************"<<endl;
		cout<<"Network #"<<cs++<<endl;
		int mask=1<<ss,s=ss;
		double sum=0;
		for(int i=0;i<n-1;i++){
			int ds=(int)dp[mask][s][1];
			double tm=16.0+sqrt(1.0*(nd[s][0]-nd[ds][0])*(nd[s][0]-nd[ds][0])+(nd[s][1]-nd[ds][1])*(nd[s][1]-nd[ds][1]));
			mask|=(1<<ds);
			cout<<"Cable requirement to connect ("<<nd[s][0]<<","<<nd[s][1]<<") to ("<<nd[ds][0]<<","<<nd[ds][1]<<") is "<<tm<<" feet."<<endl;
			s=ds;
			sum+=tm;
		}
		cout<<"Number of feet of cable required is "<<sum<<"."<<endl;
	}
}
