#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m; cin>>n>>m;
	string hor,ver; cin>>hor>>ver;
	cout<<(((hor[0]=='<' && hor[n-1]=='>' && ver[0]=='v' && ver[m-1]=='^') ||(hor[0]=='>' && hor[n-1]=='<' && ver[0]=='^' && ver[m-1]=='v')) ? "YES": "NO")<<endl;
}