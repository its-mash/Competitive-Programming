#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t>2){
		int ex[t][2];

		for(int i=0;i<t;i++)
			cin>>ex[i][0]>>ex[i][1];
		double a=0,x=0,y;
		for(int i=0;i<t;i++){
			int x1=ex[i][0],y1=ex[i][1],x2=ex[(i+1)%t][0],y2=ex[(i+1)%t][1];
			cout<<"=="<<x1<<" "<<y1<<" ,"<<x2<<" "<<y2<<" "<<endl;
			x+=(x1+x2)*(x1*y2-x2*y1); 
			a+=(x1*y2-x2*y1);
		}
		cout<<endl<<a<<"dd "<<n<<" --- "<<a*.5)<<endl;
		cin>>t;
	}
}