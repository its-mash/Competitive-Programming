#include <bits/stdc++.h>
using namespace std;

int main(){
	int c=0;
	for(int i=0;i<6;i++){
		cout<<i<<endl;
		// flush(cout);
		string ex;
		getline(cin,ex);
		if(ex=="worse" || ex=="terrible" || ex=="go die in a hole" || ex=="are you serious?" || ex=="no way" || ex=="don't even"){
			cout<<"grumpy"<<endl;
			break;
		}
		else if(ex=="great!" || ex=="cool" || ex=="not bad" || ex=="don't think so" || ex=="don't touch me!")
		{
			cout<<"normal"<<endl;
			break;
		}
		if(ex=="no")
			c++;
		if(c>3){
			cout<<"normal"<<endl;
			break;
		}		
	}
	
}