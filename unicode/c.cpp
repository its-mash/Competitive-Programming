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
	int t;
	cin>>t;
	while(t--){
		int d,a,b;
		cin>>d>>a>>b;
		if(a>b){
			for(int i=4;i<46;i++){
				int ag=(i*(i+1))/2-6;

				int sb=0;
				if(i-d>3){
					sb=((i-d)*(i-d+1))/2-3;
				}
				//cout<<ag<<" "<<sb<<endl;
				if(a-ag==sb-b){
					cout<<i<<" "<<a-ag<<endl;
				}
			}
		}
		else{
			for(int i=4;i<46;i++){
				int sb=(i*(i+1))/2-6;

				int ag=0;
				if(i-d>2){
					ag=((i-d)*(i-d+1))/2-3;
				}
				//cout<<ag<<" "<<sb<<endl;
				if(a-ag==sb-b){
					cout<<i<<" "<<a-ag<<endl;
				}
			}
		}

	}
}