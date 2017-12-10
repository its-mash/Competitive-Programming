#include <bits/stdc++.h>
using namespace std;


void display(int /*dfsdf*/*p){
	for(int i=0;i<5;i++)
		cout<<(p+i)<<" "<<*(p+i)<<endl;
}

void display2(int ex[]){
	for(int i=0;i<5;i++)
		cout<<(ex+i)<<" "<<*(ex+i)<<endl;
}

void display3(int ex[]){
	for(int i=0;i<5;i++)
		cout<<ex[i]<<" "<<&ex[i]<<endl;
}

void display4(int *p){
	for(int i=0;i<5;i++)
		cout<<p[i]<<" "<<&p[i]<<endl;
}

int main(){
	int ex[]={5,79,174,45,57};
	display(ex);
	cout<<endl;
	display2(ex);
	cout<<endl;
	display3(ex);
	cout<<endl;
	display4(ex);
	cout<<endl;

}