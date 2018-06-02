#include <bits/stdc++.h>
using namespace std;

int x=0,o=0;
char checkWin(string ex[3]){
	int cw=0;
	char w='N';
	bool corner=false;
	for(int i=0;i<3;i++){
		bool b1=false,b2=false;
		if(ex[i][0]!='.' && ex[i][0]==ex[i][1] && ex[i][1]==ex[i][2]){
			cw++;
			w=ex[i][0];
			b1=true;
			if(i==0 || i==2)
				corner=true;
		}
		if(ex[0][i]!='.' && ex[0][i]==ex[1][i] && ex[1][i]==ex[2][i]){
			cw++;
			w=ex[0][i];
			b2=true;
			if(i==0 || i==2)
				corner=true;
		}
		if(b1 && b2)
			cw--;
		cout<<cw<<endl;
	}
	bool b1=false,b2=false;
 // cout<<cw<<endl;
	if(!corner && ex[0][0]!='.' && ex[0][0]==ex[1][1] && ex[1][1]==ex[2][2]){
			cw++;
			w=ex[0][0];
			b1=true;
	}
	if(!corner && ex[0][2]!='.' && ex[0][2]==ex[1][1] && ex[1][1]==ex[2][0]){
			cw++;
			w=ex[0][2];
			b2=true;
	}
	if(b1 && b2)
			cw--;
	// cout<<cw<<endl;
	if(cw>1 || (w=='X' && x==o ) || (w=='0' && x-o==1 ) )
		w='I';
	return w;
}
int main(){
	freopen("in","r",stdin);
	string ex[3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			cin>>ex[i][j];
			if(ex[i][j]=='X')
				x++;
			else if(ex[i][j]=='0')
				o++;

		}
	}
	if(x-o==1 || x-o==0){
		char r=checkWin(ex);
		
		if(r=='I'){
			cout<<"illegal"<<endl;
		}
		else if(r=='X'){
			cout<<"the first player won"<<endl;
		}
		else if(r=='0') 
			cout<<"the second player won"<<endl;
		else{
			if(x+o==9)
				cout<<"draw"<<endl;
			else if((x+o)%2==0)
				cout<<"first"<<endl;
			else
				cout<<"second"<<endl;
		}
	}
	else
		cout<<"illegal"<<endl;
}