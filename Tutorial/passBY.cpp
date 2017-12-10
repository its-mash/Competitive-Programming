#include <iostream>

using namespace std;

void passByValue(int x){
	x++;
	cout<<x<<endl;
}
void passByRef(int& y){
	y++;
	cout<<y<<endl;
}
void passByAdd(int *x){
	(*x)++;
	cout<<x<<endl;
}
int main(){
	int x=6;

	passByValue(x);
	cout<<x<<endl;

	passByRef(x);
	cout<<x<<endl;

	passByAdd(&x);
	cout<<x<<endl;
}
