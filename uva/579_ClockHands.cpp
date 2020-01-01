#include <bits/stdc++.h>
using namespace std;

int main(){

	double h,m;
	while(scanf("%lf:%lf",&h,&m) && (h!=0 || m!=0)){
		double angle=abs(h*5+(5.0*m/60.0)-m)*6;
		cout<<setprecision(3)<<fixed<<((angle>180)?360-angle:angle)<<endl;
	}
	//cout<<"dd"<<endl;
}