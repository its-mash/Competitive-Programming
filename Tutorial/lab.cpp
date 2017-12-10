#include <bits/stdc++.h>

using namespace std;

struct LAB{
	string name,instructor;
	int noOfPc,noOfAc;
	bool busy;
	LAB(){
		busy=false;
	}
	bool isBusy(){
		return busy;
	}
	string book(){
		if(busy==true)
			return "Already Booked";
		else {
			busy=true;
			return "BOOKED!";
		}
	}
};

LAB display(LAB p){
	p.name="dfdfdf";
	return *p;

}
int main(){
	LAB a;

	a.name="Anyname";
	a.noOfPc=30;
	a.noOfAc=2;
	cout<<a.name<<endl;
	LAB *b=display(a);
	cout<<b.name<<endl;

}