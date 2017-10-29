#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main(){
	freopen("in","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string answer="YES";

		int hx,hy,x,y,dx,dy;

		vector<pair<int,int> >ex;

		for(int i=0;i<n+2;i++){
			pair<int,int> tm;
			cin>>tm.first>>tm.second;
			ex.push_back(tm);
			
		}
		pair<int,int> endd=*ex.end(),beginn=*ex.begin();
		dx=endd.first;
		dy=endd.second;
		hx=beginn.first;
		hy=beginn.second;

		sort(ex.begin(),ex.end());

		if(hx<dx){
			for(vector<pair<int,int> >::iterator it=ex.begin();it!=ex.end();it++){
				pair<int,int> tm=*it;
				int x1=it->first,y1=it->second;
				if(x1>hx && x1<=dx ){
					double dis=abs(x1-x)+abs(y1-y);	
					if(dis>1000){
						answer="NO";
						break;
					}
					x=x1;y=y1;

				}
			}

		}
		else{
			for(vector<pair<int,int> >::reverse_iterator it=ex.rbegin();it!=ex.rend();it++){
				pair<int,int> tm=*it;
				int x1=it->first,y1=it->second;
				if(x1>=dx && x1<hx ){
					double dis=abs(x1-x)+abs(y1-y);	
					if(dis>1000){
						answer="NO";
						break;
					}
					x=x1;y=y1;

				}
			}
		}
		cout<<answer<<endl;
	}
}