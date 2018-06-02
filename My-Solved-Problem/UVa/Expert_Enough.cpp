#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct car
{
	string name;
	ll pl,ph;
	car(){

	}
	car(string name,ll pl,ll ph){
		this->name=name;
		this->pl=pl;
		this->ph=ph;
	}
};
int main(){
	// freopen("in","r",stdin);
	int t;	
	cin>>t;
	while(t--) {
	    ll d;
	    cin>>d;
	    vector< car > ex(d);
	    
	    for(int i=0;i<d;i++){
	    	string name;
	    	ll pl,ph;
	    	cin>>name>>pl>>ph;
	    	ex[i]=car(name,pl,ph);
	    }
	    ll q;
	    cin>>q;
	    while(q--) {
	    	ll p,c=0;
	    	cin>>p;
	    	string nama;
	        for(int i=0;i<d;i++){
	        	if(ex[i].pl<=p && p<=ex[i].ph){
	        		c++;
	        		nama=ex[i].name;
	        	}
	        }
	        if(c==1){
	        	cout<<nama<<endl;
	        }
	        else
	        	cout<<"UNDETERMINED"<<endl;
	    }
	    if(t!=0)
	   	cout<<endl;
	}
}