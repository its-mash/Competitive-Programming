
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

ll maxx(ll a,ll b){
	if(a>b)return a;
	else return b;
}


int main(){
	 // freopen("in","r",stdin);
	// freopen("out","w",stdout);
	
	ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--) {
	    ll n,k;
	    cin>>n>>k;
	    ll dn[n+1][k+1];

	    ll mx=-1;
	    for(int i=1;i<=n;i++){
	    	cin>>dn[i][0];
	    	mx=maxx(mx,dn[i][0]);

	    	dn[i][1]=mx*i;
	    }

	    for(int i=1;i<=k;i++){
	    	dn[1][i]=dn[1][0];
	    }

	    ll maxrange[n+1][n+1];
	    for(int i=1;i<=n;i++){
	    	maxrange[i][i]=dn[i][0];

	    	for(int j=i+1;j<=n;j++){
	    		// cout<<dn[j][0]<<" ";
	    		maxrange[i][j]=max(maxrange[i][j-1],dn[j][0]);
	    	}
	    	
	    }
	    // for(int i=1;i<=n;i++)
	    // {
	    // 	for(int j=i;j<=n;j++)
	    // 		cout<<maxrange[i][j]<<" ";
	    // 	cout<<endl;
	    // }
	    for(int i=2;i<=n;i++){
	    	for(int j=2;j<=k;j++){
	    		// cout<<i<<">"<<j<<endl;
	    		dn[i][j]=1e+9;
	    		for(int x=1;x<i;x++){
	    			ll mx=maxx(dn[x][j-1],maxrange[x+1][i]*(i-x));

	    			// cout<<dn[x][j-1]<<","<<maxrange[x+1][i]*(i-x)<<endl;
	    			if(dn[i][j]>mx){
	    				dn[i][j]=mx;
	    			}
	    		}
	    		 // cout<<dn[i][j]<<endl;
	    		 // cout<<endl;
	    	}
	    }
	    cout<<dn[n][k]<<endl;
	    // for(int i=1;i<=n;i++)
	    // {
	    // 	for(int j=1;j<=k;j++)
	    // 		cout<<dn[i][j]<<" ";
	    // 	cout<<endl;
	    // }
	}

	
	
}