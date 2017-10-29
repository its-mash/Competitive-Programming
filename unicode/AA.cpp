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
		int a,b;
		int ans=0,pv;
		cin>>a>>b>>pv;
		b--;
		while(b--){
			int p;
			cin>>p;
			if(p>pv){
				tm=(p-pv)/2;
			}
			else
				tm=(pv-p)*2;
		}
	}
}