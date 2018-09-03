#include <bits/stdc++.h>
using namespace std;

int getInd(char ch){
	return (ch>='a')?ch-'a'+26:ch-'A';
}
int getPos(int cp,vector<int>oc){
	int l=0,r=oc.size();
	// cout<<r<<endl;
	while(l<r){
		int m=l+(r-l+1)/2;
		if(cp>=oc[m]){
			l=m+1;
			// cout<<m<<" ";

		}
		else
			r=m-1;

	}
	cout<<oc[l]<<endl;
	return l;
}
int main(){
	freopen("in","r",stdin);
	cin.sync_with_stdio(false);
	string ex;
	cin>>ex;
	int sz=ex.length();
	vector<vector<int> > oc(52,vector<int>());
	
	for(int i=0;i<sz;i++){
		oc[getInd(ex[i])].push_back(i);
	}
	int n;
	cin>>n;
	while(n--) {
		string ans="Matched";
		int bp=0,ep=0,cp=-1;
	 	string qr;
	 	cin>>qr;
	 	for(int i=0;i<qr.length();i++){
	 		// cout<<cp<<"dd";
	 		// int np=getPos(qr[i],cp,oc);
	 	    // cout<<qr[i]<<" "<<np<<endl;
	 	    int ind=getInd(qr[i]);
	 	    int np=getPos(cp,oc[ind]);
	 	    // cout<<np<<endl;
	 	    // vector<int>::iterator np=upper_bound(oc[ind].begin(),oc[ind].end(),cp);
	 		if(np!=oc[ind].size()){
	 			cp=oc[ind][np];
	 			if(i==0)
	 				bp=cp;
	 			if(i+1==qr.length())
	 				ep=cp;
	 		}
	 		else{
	 			ans="Not matched";
	 			break;
	 		}
	 		// int l=i;
	 		// while(i+1<qr.length() && qr[i+1]==qr[i]){
	 		// 	i++;
	 		// }
	 		// cp+=l-i;

	 	}
	 	if(ans[0]=='M')
			cout<<ans<<" "<<bp<<" "<<ep<<endl;
		else
			cout<<ans<<endl;
	}

}