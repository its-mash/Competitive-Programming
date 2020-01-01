#include <iostream>
#include<stack>

using namespace std;


int main(){
//freopen("in","r",stdin); 
	int n,m,nm;
	cin>>n>>m;
	nm=m/32+1;
	//cout<<nm<<endl;
	unsigned int ex[n][nm]={};

	for(int i=0;i<n;i++){
		for(int j=0;j<m/4;j++){
			char ch;
			cin>>ch;

			unsigned int val=(ch >='A') ? (ch-'A')+10 : ch-'0';
			
			ex[i][j/8]= (ex[i][j/8] | val<<(32-(j+1)*4));



		}

	}
	int dirx[]={0,0,-1,1};
	int diry[]={-1,1,0,0},c=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<nm;j++){
		    //bitset<32> tt(ex[i][j]);

			//cout<<tt<<endl;
			for(int v=31;v>=0 && ex[i][j]!=0 ;v--){
				// int o=i,p=j*32+(31-k);
				//cout<<p<<"  ";
				//cout<<(ck & 1<<v)<<endl;
				unsigned int ck=ex[i][j];

				//cout<<ck<<endl;
				if((ck & 1<<v)!=0){
					int o=i,p=j*32+(31-v);
					
					stack<pair<int,int> >st;

					ex[o][p/32]&= ~(1<<(31-(p%32)));

					st.push(make_pair(o,p));
					//cout<<o<<";"<<p<<" ";
					while(!st.empty()){
						pair<int,int> nd=st.top();st.pop();
						int x=nd.first,y=nd.second;
						//cout<<x<<" "<<y<<endl;

						for(int k=0;k<4;k++ ){
							int nx=x+dirx[k],ny=y+diry[k];

							int gh=ex[nx][ny/32] & (1<<(31-(ny%32)));

							if(nx>=0 && nx<n && ny >=0 && ny <m*4 && gh){
								st.push(make_pair(nx,ny));

								ex[nx][ny/32]&= ~(1<<(31-(ny%32)));
							}
						}
					}
					c++;
					// cout<<o<<","<<p<<endl;
					// bitset<32> io(ex[0][0]),io2(ex[0][1]);
					// bitset<32> iio(ex[0][0]),iio2(ex[0][1]);	
					// cout<<io<<io2<<endl;
					// cout<<iio<<iio2<<endl;			
				}
			}
		}
		//cout<<endl;
	}
	cout<<c<<endl;
}