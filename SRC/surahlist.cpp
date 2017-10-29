#include <bits/stdc++.h>

using namespace std;

struct Surah
{
	int index,vrs;
	string name;
	Surah(int _index,string _name,int _vrs){
		index=_index;
		name=_name;
		vrs=_vrs;
	}
	
};

int main(){
	Surah surah1(1,"bakara",535);
	cout<<surah1.index<<" "<<surah1.name<<" "<<surah1.vrs<<endl;
}