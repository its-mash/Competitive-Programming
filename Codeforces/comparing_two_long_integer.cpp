#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[1000005],b[1000005];
	scanf("%s",a);
	scanf("%s",b);
	int i=0,j=0,la=strlen(a),lb=strlen(b);

	while(i<la && a[i]=='0')
		i++;
	while(j<lb && b[j]=='0')
		j++;
	la=strlen(a)-i;
	lb=strlen(b)-j;
	if(la==lb){

		for(int ii=0;ii<la;ii++){
			if(a[i+ii]!=b[j+ii]){
				if(a[i+ii]>b[j+ii])
					cout<<'>'<<endl;
				else
					cout<<'<'<<endl;
				return 0;
			}
		}
		cout<<'='<<endl;
	}
	else if(la<lb){
		cout<<'<'<<endl;
	}
	else
		cout<<'>'<<endl;
}
