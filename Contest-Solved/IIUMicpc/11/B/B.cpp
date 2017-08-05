#include <bits/stdc++.h>
using namespace std;

int count(string ex){
    int c=0;
    for(int i=0;i<ex.length();i++){
        if(isspace(ex[i]))
            c++;
    }
    return c;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string ex,fx,a,b;
		getline(cin,ex);
		getline(cin,fx);
		if(count(ex)>=count(fx))
			cout<<ex<<endl;
		else
			cout<<fx<<endl;
	}
}
