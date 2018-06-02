#include <iostream>
#include <cmath>
using namespace std;

struct Cordinate
{
	double x,y;
	void ini(double xx,double y){
		x=xx;
		this->y=y;
	}

};

double distance(Cordinate ex[2]){
	return sqrt((ex[0].x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main(){
	Cordinate cor[2];
	cor[0].ini(4,5);
	cor[1].ini(5,6);
	cout<<distance(cor)<<endl;
	// cout<<a.x<<" "<<a.y<<endl;
	// cout<<b.x<<" "<<b.y<<endl;
	// a.x=3;a.y=4;
}