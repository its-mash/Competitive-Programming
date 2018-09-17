#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool pos(pair<int,int> a,pair<int,int> b){
	int x=a.first,y=a.second,xx=b.first,yy=b.second;
	return (x-xx)*(x-xx)+(y-yy)*(y-yy)==5;
}
int main(){
	int n;
	cin>>n;
	vector<pair<int,int> > ex[27];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char ch;cin>>ch;
			ex[ch-'A'].push_back({i,j});
		}
	}

	for(int i=0;i<ex['I'-'A'].size();i++){
		for(int j=0;j<ex['C'-'A'].size();j++){
			if(pos(ex['I'-'A'][i],ex['C'-'A'][j])){
				for(int k=0;k<ex['P'-'A'].size();k++){
					if(pos(ex['C'-'A'][j],ex['P'-'A'][k])){
						for(int l=0;l<ex['C'-'A'].size();l++){
							if(pos(ex['P'-'A'][k],ex['C'-'A'][l])){
								for(int m=0;m<ex['A'-'A'].size();m++){
									if(pos(ex['C'-'A'][l],ex['A'-'A'][m])){
										for(int n=0;n<ex['S'-'A'].size();n++){
											if(pos(ex['A'-'A'][m],ex['S'-'A'][n])){
												for(int o=0;o<ex['I'-'A'].size();o++){
													if(pos(ex['S'-'A'][n],ex['I'-'A'][o])){
														for(int p=0;p<ex['A'-'A'].size();p++){
															if(pos(ex['I'-'A'][o],ex['A'-'A'][p])){
																for(int q=0;q<ex['S'-'A'].size();q++){
																	if(pos(ex['A'-'A'][p],ex['S'-'A'][q])){
																		for(int r=0;r<ex['G'-'A'].size();r++){
																			if(pos(ex['S'-'A'][q],ex['G'-'A'][r])){
																					cout<<"Yes"<<endl;
																					return 0;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<"No"<<endl;
}
