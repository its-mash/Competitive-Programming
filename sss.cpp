#include <iostream>
using namespace std;

void fun(int &x){
	x+=5;
	cout<<"in function: "<<x<<endl;
}
int main(){
	int x=15;
	fun(x);
	cout<<"in main: "<<x<<endl;
}