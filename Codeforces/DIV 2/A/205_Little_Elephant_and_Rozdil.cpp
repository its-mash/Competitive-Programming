#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,minn=1000000001,pos,con=-1;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x<minn){
			minn=x;
			pos=i;
		}
		else if(x==minn){
			con=minn;
		}	
	}
	if(con!=-1 && minn==con){
		cout<<"Still Rozdil"<<endl;
	}
	else
		cout<<pos<<endl;

}