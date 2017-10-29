#include <bits/stdc++.h>

using namespace std;


int main(){
	 //freopen("in","r",stdin);
	 int n;
	 cin>>n;
	 int ans=0;
	 while(n--){
	 	int x,y;
	 	cin>>x>>y;
	 	//cout<<x<<y<<endl;
	 	if(x>ans)
	 		ans=x;
	 	else{
	 		int v=ceil(1.0*(ans-x+1)/y);
	 		ans=x+v*y;
	 	}
	 	//cout<<ans<<endl;
	 }
	 cout<<ans<<endl;
}