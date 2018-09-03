//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <set>
//#include <iomanip>
//#include <list>
//#include <stack>
//#include <queue>
//#include <bitset>
//#include <numeric>
//
//#include <cstdio>
//#include <cmath>
//#include <climits>
//#include <cstring>
//#include <cctype>
//#include <cstdlib>
//#include <stdio.h>
//
//using namespace std;
//
//typedef vector<int> vi;
//typedef set<int> si;
//
//int main() {
//
//	int T; cin>>T;
//	while (T--) {
//		int A,B,C; cin>>A>>B>>C;
//    long long m[A][B][C];
//    for (int i=0;i<A;++i) for (int j=0;j<B;++j) for (int k=0;k<C;++k) {
//      long long g; cin>>g;
//      if (i>0) g+=m[i-1][j][k];
//      if (j>0) g+=m[i][j-1][k];
//      if (k>0) g+=m[i][j][k-1];
//      if (i>0 && j>0) g-=m[i-1][j-1][k];
//      if (j>0 && k>0) g-=m[i][j-1][k-1];
//      if (i>0 && k>0) g-=m[i-1][j][k-1];
//      if (i>0 && j>0 && k>0) g+=m[i-1][j-1][k-1];
//      m[i][j][k]=g;
//    }
//    for (int i=0;i<A;++i){
//		for (int j=0;j<B;++j){
//			for (int k=0;k<C;++k) 
//				cout<<m[i][j][k]<<" ";
//		cout<<endl;
//		}
//		cout<<endl;
//	}
//    long long max_sum = INT_MIN;
//    for (int i=0;i<A;++i) for (int j=0;j<B;++j) for (int k=0;k<C;++k) 
//    for (int i1=i;i1<A;++i1) for (int j1=j;j1<B;++j1) for (int k1=k;k1<C;++k1)  {
//      long long s = m[i1][j1][k1];
//      if (i>0) s-=m[i-1][j1][k1];
//      if (j>0) s-=m[i1][j-1][k1];
//      if (k>0) s-=m[i1][j1][k-1];
//      if (i>0 && j>0) s+=m[i-1][j-1][k1];
//      if (j>0 && k>0) s+=m[i1][j-1][k-1];
//      if (i>0 && k>0) s+=m[i-1][j1][k-1];
//      if (i>0 && j>0 && k>0) s-=m[i-1][j-1][k-1];
//      if (s>max_sum) max_sum = s;
//    }
//
//    cout<<max_sum<<endl;
//    if (T) cout<<endl;
//	}
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c;cin>>a>>b>>c;
		a++;b++;c++;
		ll dn[a][b][c]={},ans=INT_MIN;
		for(int i=1;i<a;i++){
			for(int j=1;j<b;j++){
				for(int k=1;k<c;k++){
					cin>>dn[i][j][k];
					dn[i][j][k]+=dn[i-1][j][k];
					dn[i][j][k]+=dn[i][j-1][k];
					dn[i][j][k]+=dn[i][j][k-1];
					
					dn[i][j][k]-=dn[i-1][j-1][k];
					dn[i][j][k]-=dn[i-1][j][k-1];
					dn[i][j][k]-=dn[i][j-1][k-1];

					dn[i][j][k]+=dn[i-1][j-1][k-1];

				}
			}
		}
//    for (int i=1;i<a;++i){
//		for (int j=1;j<b;++j){
//			for (int k=1;k<c;++k) 
//				cout<<dn[i][j][k]<<" ";
//		cout<<endl;
//		}
//		cout<<endl;
//	}

		for(int i=1;i<a;i++){
			for(int j=1;j<b;j++){
				for(int k=1;k<c;k++){
					for(int ii=i;ii<a;ii++){
						for(int jj=j;jj<b;jj++){
							for(int kk=k;kk<c;kk++){
								ll sum=dn[ii][jj][kk];

								sum-=dn[i-1][jj][kk];
								sum-=dn[ii][j-1][kk];
								sum-=dn[ii][jj][k-1];
								
								sum+=dn[i-1][j-1][kk];
								sum+=dn[i-1][jj][k-1];
								sum+=dn[ii][j-1][k-1];

								sum-=dn[i-1][j-1][k-1];
								if(sum>ans)ans=sum;
							}
						}
					}

				}
			}
		}
		cout<<ans<<endl;
		if(t)cout<<endl;
	}
}
