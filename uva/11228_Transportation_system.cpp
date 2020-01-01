#include <bits/stdc++.h>
using namespace std;

struct Route
{
	int b,e,w;
};

bool cmp(Route a,Route b){
	return a.w<b.w;
}


int root(int cn[],int x){

	//cout<<x<<endl;
	while(cn[x]!=x){
		x=cn[x];
	}
	return x;
}

int main(){
	//freopen("in","r",stdin);
	cin.sync_with_stdio(false);
	int t;
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		int n,r;
		cin>>n>>r;
		int cn[n],x[n],y[n],m=0;
		//cout<<"--------------------------------------"<<n<<" "<<r<<endl;
		for(int i=0;i<n;i++)
			cn[i]=i;

		Route  route[500000];

		//cout<<"--------------------------------------"<<n<<" "<<r<<endl;
		for(int i=0;i<n;i++){
			int xx,yy;
			cin>>xx>>yy;
			x[i]=xx;
			y[i]=yy;
			//cout<<xx<<","<<yy<<" "<<n<<endl;
			for(int j=0;j<i;j++){
				 route[m].b=j;
				 route[m].e=i;

				 route[m].w=(xx-x[j])*(xx-x[j])+(yy-y[j])*(yy-y[j]);
				 m++;
				 //cout<<j<<" "<<i<<endl;
			}
			

		}
		sort(route,route+m,cmp);
		r=r*r;


		
		int state=1;
		double road=0,train=0;


		for(int i=0;i<m;i++){

			int b=route[i].b,e=route[i].e,w=route[i].w,rb=root(cn,b),re=root(cn,e);

			if(rb!=re){
				if(w<=r){
					road+=sqrt(w);
				}
				else{
					state++;
					train+=sqrt(w);
				}
				cn[rb]=cn[re];
			}
		}

		cout<<"Case #"<<cs<<": "<<state<<" "<<int(round(road))<<" "<<int(round(train))<<endl;

	}
}
