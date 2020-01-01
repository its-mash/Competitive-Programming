#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ex[100001][2],n;

inline bool  colinear(int i,int j,int k){
	ll a=ex[i][0],b=ex[i][1],c=ex[j][0],d=ex[j][1],x=ex[k][0],y=ex[k][1];
	return x*(d-b)+y*(a-c)+(b*c-a*d)==0;
}

bool solve(int i,int j){
	vector<int> p;
	for(int k=0;k<n;k++){
		if(!colinear(i,j,k))
			p.push_back(k);
	}
	if(p.size()<=2)return true;


	for(int k=0;k<p.size();k++){
		if(!colinear(p[0],p[1],p[k]))
			return false;
	}

	return true;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif

	cin.sync_with_stdio(false);
	cin>>n;
	
	for(int i=0;i<n;i++) cin>>ex[i][0]>>ex[i][1];
	
	if(n<=4){
		cout<<"YES"<<endl; return 0;
	}

	if(solve(0,1) || solve(1,2) || solve(0,2))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


}



// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("in","r",stdin);
// 	#endif

// 	cin.sync_with_stdio(false);
// 	int n;cin>>n;
	
// 	for(int i=0;i<n;i++) cin>>ex[i][0]>>ex[i][1];
	
// 	if(n<=4){
// 		cout<<"YES"<<endl; return 0;
// 	}

// 	srand(time(NULL));
// 	while(clock() < 1.7*CLOCKS_PER_SEC){
// 			int i,j;
// 			do{
// 				i=rand()%n; j=rand()%n;
// 			}
// 			while(i==j);

// 			vector<int> p;
// 			bool f=false;
// 			for(int q=0;q<n;q++){
// 				if(q==i || q==j)
// 					continue;
// 				if(!colinear(i,j,q))
// 					p.push_back(q);
// 				else
// 					f=true;
			
// 			}
// 			if(!f)
// 				continue;
// 			if(p.size()>2){
// 				for(int i=0;i<p.size()-2;i++){
// 					// cout<<i<<i+1<<i+2<<endl;
// 					if(!colinear(p[i],p[i+1],p[i+2])){
// 						cout<<"NO"<<endl;
// 						return 0;
// 					}
// 				}
// 			}
			
// 			cout<<"YES"<<endl;
// 			return 0;
// 	}
// 	cout<<"NO"<<endl;


// }


