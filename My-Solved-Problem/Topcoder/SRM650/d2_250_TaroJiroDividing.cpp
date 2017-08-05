#include <bits/stdc++.h>
using namespace std;



class TaroJiroDividing{
 	public:	
	int gcd(int x,int y);
 	int getNumber(int a,int b);	   
};

int TaroJiroDividing::gcd(int x,int y){
	return 5;
}

int TaroJiroDividing::getNumber(int a, int b){
	return gcd(3,4);
}

int main(){
	TaroJiroDividing t;
	int a,b;
	cout<<t.getNumber(a,b);
}