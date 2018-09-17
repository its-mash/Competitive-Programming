#include <bits/stdc++.h>
using namespace std;

int main(){
	int **ex=new int*[5];
	ex[1]=new int[5];
	ex[0]=new int[3];


	for(int i=0;i<3;i++)
		cin>>ex[0][i];
	for(int i=0;i<5;i++)
		cin>>ex[1][i];

	for(int i=0;i<3;i++)
		cout<<ex[0][i]<<endl;
	for(int i=0;i<5;i++)
		cout<<ex[1][i]<<endl;
	if(ex[0]!=NULL)
		cout<<ex[0]<<" "<<*ex[0]<<endl;
	if(ex[1]!=NULL)
		cout<<ex[1]<<" d "<<*ex[1]<<endl;
	cout<<ex[2]<<" d "<<endl;
	cout<<ex[4]<<" d "<<endl;
	
	
}
