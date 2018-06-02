#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
int main()
{  
	// freopen("in","r",stdin);
	int n=1000001;
	vector<vector<bool> > ex(n,vector<bool>(10));
	ex[0][0]=true;
	// cout<<ex[1][0]<<endl;
	for(int i=1;i<n;i++){
		
		for(int j=0;j<10;j++){
			int sm=0;

			if(j-2>=0){
				sm+=ex[i-1][j-2];
			}
			if(j-1>=0){
				sm+=ex[i-1][j-1];
			}
			sm+=ex[i-1][j];
			if(sm%2==1)
				ex[i][j]=true;
			else
				ex[i][j]=false;
		}
		// cout<<i<<endl;

	}
	// for(int i=0;i<100;i++){
	// 	for(int j=0;j<10;j++)
	// 		cout<<ex[i][j]<<" ";
	// 	cout<<endl;
	// }
	int q;
	cin>>q;
	// cout<<q<<endl;
	while(q--) {
	    int r;
	    cin>>r;
	    int i=0;
	    while(ex[r-1][i]%2!=0){
	    	i++;
	    }
	    cout<<i+1<<endl;
	}
	
}



