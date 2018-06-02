#include <bits/stdc++.h>
using namespace std;

int main(){
	int num[4],d;
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>d;
	bool ex[d+1]={};
	for(int i=0;i<4;i++){
		for(int j=num[i];j<=d;j+=num[i])
			ex[j]=true;
	}
	cout<<count(ex,ex+d+1,true)<<endl;
}