#include <bits/stdc++.h>
using namespace std;


void display(int n){

	for(int j=0;j<n;j++){

		for(int i=0;i<n;i++)
			if(i==j || i+j==n-1 || j==0 || j==n-1 || i==0 || i==n-1)
				cout<<1<<" ";
			else 
				cout<<'.'<<" ";
		cout<<endl;
	}


}

int main(){
	int n;
	while(cin>>n){
		display(n);
	}

}