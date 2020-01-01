#include <bits/stdc++.h>
using namespace std;

int main(){
	int y;
	cin>>y;
	y++;
	while(1){
		int f=y%10,s=y%100/10,l=y/1000,e=y%1000/100;
		if(f!=s && f!=s && f!=l && f!=e && s!=l && s!=e && l!=e)
		{
			cout<<y<<endl;
			break;
		}
		y++;
	}
}