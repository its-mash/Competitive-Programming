#include <bits/stdc++.h>
using namespace std;
int main(){
	int ex[9]={1,2,4,5,6,34,66,66,78};
	vector<int> fx(ex,ex+9);
	cout<<lower_bound(fx.begin(),fx.end(),444)-fx.begin()<<endl;
}
