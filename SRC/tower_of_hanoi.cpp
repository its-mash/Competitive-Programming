#include <bits/stdc++.h>

using namespace std;


void hanoi(int n,char uusing,char to,char from,int &m){

	if(n==1)
		cout<<++m<<" Move:: move disk 1 from "<<from<<" rod to "<<to<<" rod"<<endl;
	else{
		hanoi(n-1,from, uusing,to,m);
		cout<<++m<<" Move:: move disk "<<n<<" from "<<from<<" to "<<to<<" rod"<<endl;
		
		hanoi(n-1,uusing,to,from,m);

	}
}

int main(){

	int n,m=0;
	cin>>n;
	//hanoi(n,'A','C','B',m);
}
//165464