#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double radius,area,pi=3.14159;
	cin>>radius;
	area=pi*radius*radius;
	cout<<"A="<<setprecision(4)<<fixed<<area<<endl;
}