#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> ex;
	ex.insert(0);
	ex.insert(50);
	for(int i=1;i<=20;i++){
		ex.insert(i);
		ex.insert(i*2);
		ex.insert(i*3);
	}
	int ans[302][2]={};

	for(auto i=ex.begin();i!=ex.end();i++){
		for(auto j=i;j!=ex.end();j++){
			for(auto k=j;k!=ex.end();k++){
//				cout<<*i<<" "<<*j<<" "<<*k<<endl;
				int s=*i+*j+*k;
				if(s<302){
					ans[s][0]++;
					int pm;
					if(*i==*j && *j==*k){
						pm=1;
					}else if(*i==*j || *j==*k || *i==*k){
						pm=3;
					}
					else{
						pm=6;
					}
					ans[s][1]+=pm;
				}
			}
		}
	}
	int sc;cin>>sc;
	while(sc>0){
		if(sc<181 && ans[sc][0]!=0){
			cout<<"NUMBER OF COMBINATIONS THAT SCORES "<<sc<<" IS "<<ans[sc][0]<<"."<<endl
				<<"NUMBER OF PERMUTATIONS THAT SCORES "<<sc<<" IS "<<ans[sc][1]<<"."<<endl;
		}
		else
			cout<<"THE SCORE OF "<<sc<<" CANNOT BE MADE WITH THREE DARTS."<<endl;

		cout<<"**********************************************************************"<<endl;
		cin>>sc;
	}
	cout<<"END OF OUTPUT"<<endl;
}
