#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int sum=0,s;
		for(int i=0;i<8;i++){
			 cin>>s;
			 sum+=s;
		}
		printf("%.2f\n",sum/4.0);

	}
}
