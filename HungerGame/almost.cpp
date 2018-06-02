#include <bits/stdc++.h>
using namespace std;

#define ll long long 


int main(){
    // freopen("in","r",stdin);
    string ex;
    cin>>ex;
    ll length=ex.length();

   
    	int b=0,e=length-1,c=0;
    	// cout<<b<<" "<<e<<endl;
    	while(b<e && ex[b]==ex[e]){
    		b++;
    		e--;
    	}
    	//cout<<b<<" "<<e<<endl;
    	if(b<e){

    		int f=b,l=e;
    		b++;
    		e--;
    		while(b<e && ex[b]==ex[e]){
	    		b++;
	    		e--;
	    	};
	    	//cout<<f<<" fl "<<l<<endl;
	    	//cout<<b<<" be "<<e<<endl;
	    	if(b<e){	    		}

	    		int ff=b,la=e;
	    		b++;
	    		e--;
	    		while(b<e && ex[b]==ex[e]){
		    		b++;
		    		e--;
		    	}

		    	//cout<<b<<" bb "<<e<<endl;
		    	//cout<<ff<<" xx "<<la<<endl;
		    	if(b<=e){
		    		cout<<"NO"<<endl;
	    			return 0;
		    	}else{
		    		if(ex[f]== ex[la] && ex[ff]==ex[l])
		    			cout<<"YES"<<endl;
		    		else
		    			cout<<"NO"<<endl;
		    	}
	    		
	    	}
	    	else{
	    		//cout<<"fd"<<l<<endl;
	    		if(length%2==1 &&  (ex[f]==ex[b] || ex[l]==ex[b]))
	    			cout<<"YES"<<endl;
	    		else
	    			cout<<"NO"<<endl;
	    		return 0;
	    	}
    	}
    	else{
    		cout<<"YES"<<endl;
    		return 0;
    	}
    
}	