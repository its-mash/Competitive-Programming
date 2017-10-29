#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("in","r",stdin);

	int nd;
	const int n=26;
	while(cin>>nd && nd){

		int exy[n][n],exm[n][n];

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++){
				if(i!=j){
					exy[i][j]=600;
					exm[i][j]=600;
				}
				else{
					exy[i][j]=0;
					exm[i][j]=0;
				}
			}
		}

		for(int i=0;i<nd;i++){
			char f,d,n1,n2;
			int w;
			cin>>f>>d>>n1>>n2>>w;

			if(n1==n2)
				continue;
			if(f=='Y'){
				exy[n1-'A'][n2-'A']=w;
				if(d=='B'){
					exy[n2-'A'][n1-'A']=w;
				}
			}
			else{
				exm[n1-'A'][n2-'A']=w;
				if(d=='B'){
					exm[n2-'A'][n1-'A']=w;
				}
			}

		}
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(exy[i][k]+exy[k][j] < exy[i][j])	
						exy[i][j]=exy[i][k]+exy[k][j];
				}
			}
		}
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(exm[i][k]+exm[k][j] < exm[i][j])	
						exm[i][j]=exm[i][k]+exm[k][j];
				}
			}
		}
		char s,d;
		cin>>s>>d;

		int ans=INT_MAX,p=-1;
		for(int i=0;i<n;i++){
			if(exy[s-'A'][i]!=600 && exm[d-'A'][i]!=600){
				ans=min(ans,exy[s-'A'][i]+exm[d-'A'][i]);
				 p=i;
			}
		}

		if(p!=-1){
			cout<<ans;
			for(int i=0;i<n;i++){
				if(exy[s-'A'][i]!=600 && exm[d-'A'][i]!=600 &&  exy[s-'A'][i]+exm[d-'A'][i]==ans){
					cout<<" "<<char(i+'A');
				}
			}
			cout<<endl;
		}
		else
		{
			cout<<"You will never meet."<<endl;
		}
	}

}