#include <bits/stdc++.h>

using namespace std;


void display(int *p/*dfdsf*/){
	for(int i=0;i<4;i++){

		cout<<p[i]<<"  "<<&p[i]<<endl; //ex[5]==(ex+5)
		cout<<*(p+i)<<"  "<<(p+i)<<endl; //ex[5]==(ex+5)
	}
}

void displayy(int p[]){
	for(int i=0;i<4;i++){

		cout<<p[i]<<"  "<<&p[i]<<endl; //ex[5]==(ex+5)
		cout<<*(p+i)<<"  "<<(p+i)<<endl; //ex[5]==(ex+5)
	}
}

int main(){
	int ex[4]={4,5,6,7};

	display(ex);
	cout<<endl;
	displayy(ex);
}

