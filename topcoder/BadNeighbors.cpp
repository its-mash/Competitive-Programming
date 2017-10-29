#include <bits/stdc++.h>
using namespace std;

class BadNeighbors
{
public:
	// int maxDonations(vector <int> donations){
	// 	int sz=donations.size();
 //        int ex[sz];
 //        copy(donations.begin(),donations.end(),ex);
	// 	for(int i=2;i<sz-1;i++){
 //            int temp=donations[i],temp2=ex[i+1];
	// 		for(int j=0;j<i-1;j++){
                
	// 			if(donations[j]+temp>donations[i]){
	// 				donations[i]=temp+donations[j];
	// 			}
 //                if(ex[j+1]+temp2>ex[i+1]){
 //                	ex[i+1]=ex[j+1]+temp2;
 //                }
                   
	// 		}
	// 	}

	// 	return max(max(ex[1],ex[sz-1]),max(donations[0],donations[sz-2]));
	// }
	int T(vector <int> donations,int n){
		if(n==0)
			return donations[0];
		if(n==1)
			return max(donations[0],donations[1]);

		return max(donations[n]+T(donations,n-2),T(donations,n-1));
	}
	int maxDonations(vector <int> donations){

		return T(donations,donations.size()-1);
	}

};

int main(){
	BadNeighbors b;
	cout<<b.maxDonations({79,7,11})<<endl;
}