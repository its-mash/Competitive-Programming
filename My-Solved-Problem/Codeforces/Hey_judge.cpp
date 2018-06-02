#include <bits/stdc++.h>
using namespace std;

bool solve(int ex[],int n){
	if(n==0){
		for(int i=1;i<6;i++){
			//cout<<ex[i]<<" ";
			if(ex[i]<0)return false;
		}
		//cout<<endl;
		return true;
	}
	bool ans=false;

	ex[n]--;
	ans|=solve(ex,n-1);
	ex[n]++;
	for(int i=1;i<=n/2;i++){
		ex[i]--;ex[n-i]--;		
		ans|=solve(ex,n-1);
		ex[i]++;ex[n-i]++;		
	}
	return ans;

}
int main(){
	int n;
	cin>>n;
	while(n--){
		int ex[6]={};
		for(int i=0;i<7;i++){
			char ch;
			cin>>ch;
			ex[ch-'A'+1]++;
		}
		if(solve(ex,5))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
