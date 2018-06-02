#include <iostream>
#include <cmath>
using namespace std;

struct Cordinate
{
	double x,y;
	Cordinate(int x,int y){
		this->x=x;
		this->y=y;
	}

};

double distance(Cordinate a,Cordinate b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main(){
	Cordinate a(3,4),b(5,2);

	cout<<distance(a,b)<<endl;
	// cout<<a.x<<" "<<a.y<<endl;
	// cout<<b.x<<" "<<b.y<<endl;
	// a.x=3;a.y=4;
}