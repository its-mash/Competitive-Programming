#include <bits/stdc++.h>

using namespace std;

string GetBinaryStringFromHexString (string sHex)
		{
			int sz=sHex.length();
			string sReturn="";
			for (int i = 0; i < sz; ++i)
			{
				switch (sHex [i])
				{
					case '0': sReturn.append ("0000"); break;
					case '1': sReturn.append ("0001"); break;
					case '2': sReturn.append ("0010"); break;
					case '3': sReturn.append ("0011"); break;
					case '4': sReturn.append ("0100"); break;
					case '5': sReturn.append ("0101"); break;
					case '6': sReturn.append ("0110"); break;
					case '7': sReturn.append ("0111"); break;
					case '8': sReturn.append ("1000"); break;
					case '9': sReturn.append ("1001"); break;
					case 'a': sReturn.append ("1010"); break;
					case 'b': sReturn.append ("1011"); break;
					case 'c': sReturn.append ("1100"); break;
					case 'd': sReturn.append ("1101"); break;
					case 'e': sReturn.append ("1110"); break;
					case 'f': sReturn.append ("1111"); break;
				}
			}
			return sReturn;
}

int h,w;



void doDFS1(string ex[],bool vis[][200],int i,int j,int &pl,int &pr,int &pb){
	if(i<0 || i>=h || j<0 || j>=w || vis[i][j] || ex[i][j]!='1')return;

	if(i>pb)pb=i;
	if(j>pr)pr=j;
	if(j<pl)pl=j;
	
	vis[i][j]=true;

	doDFS1(ex,vis,i-1,j,pl,pr,pb);
	doDFS1(ex,vis,i+1,j,pl,pr,pb);
	doDFS1(ex,vis,i,j+1,pl,pr,pb);
	doDFS1(ex,vis,i,j-1,pl,pr,pb);

}

void doDFS0(char ex[][200],bool vis[][200],int i,int j,int r,int c,bool& border){

	
	if(i<0)i=r-1;
	else if(i>=r)i=0;
	if(j<0)j=c-1;
	else if(j>=c)j=0;

	if(vis[i][j] || ex[i][j]!='0')return;
	
	if(i==0 || j==0 || i==r-1 || j==c-1)border=false;
	vis[i][j]=true;

	doDFS0(ex,vis,i-1,j,r,c,border);
	doDFS0(ex,vis,i+1,j,r,c,border);
	doDFS0(ex,vis,i,j+1,r,c,border);
	doDFS0(ex,vis,i,j-1,r,c,border);

}

int main(){

	//freopen("in","r",stdin);
	int cs=0;
	while(cin>>h>>w && h!=0 && w!=0){

		w*=4;
		string ans="";

		string ex[h];
		for(int i=0;i<h;i++){
			string tm;
			cin>>tm;
			ex[i]=GetBinaryStringFromHexString(tm);
		}
		bool vis[h][200]={};

		// cout<<"unBoxed>................................>>>>"<<endl;
		// for(int i=0;i<h;i++){

		// 	for(int j=0;j<w;j++){
		// 		cout<<ex[i][j];
		// 	}
		// 	cout<<endl;
		// }
		// cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>unBoxed>>>"<<endl;

		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				
				if(ex[i][j]=='1' && !vis[i][j]){
					
					int pl=200,pr=0,pt=i,pb=0,c=0;
					doDFS1(ex,vis,i,j,pl,pr,pb);
					int  rr=pb-pt+1,cc=pr-pl+1;
					char nx[rr][200];
					bool nvis[rr][200]={};

					
					
					for(int xx=pt,s=0;xx<=pb;xx++,s++){

						for(int yy=pl,t=0;yy<=pr;yy++,t++){

							
							if(ex[xx][yy]=='1' && !vis[xx][yy]){
								nx[s][t]='0';
								
							}
							else{
								nx[s][t]=ex[xx][yy];
								
							}
						
						}
						
					}
					
					//cout<<pt<<":"<<pb<<":"<<pl<<":"<<pr<<endl;
					//cout<<"Boxed................................>>>>"<<endl;
					for(int xx=0;xx<rr;xx++){

						for(int yy=0;yy<cc;yy++){
							// if(j==pl)
							//  	cout<<"*";
							// else if(j==pr)cout<<"^";
						 //    else if(i==pt)cout<<"_";
						 //    else if(i==pb)cout<<">";
							// // else
							// // 	cout<<ex[i][j];
							// else 
							
							if(nx[xx][yy]=='0' && !nvis[xx][yy]){
								
								bool border=true;
								doDFS0(nx,nvis,xx,yy,rr,cc,border);
								if(border)c++;
							}
							//cout<<nx[xx][yy];
						}
						//cout<<endl;
					}
					
					//cout<<c<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Boxed>>>>"<<endl;
					//cout<<endl<<endl;
					
					if(c==1)
						ans+='A';
					else if(c==3)
						ans+='J';
					else if(c>=5)
						ans+='D';
					else if(c==4)
						ans+='S';
					else if(c==0)
						ans+='W';
					else if(c==2)
						ans+='K';
					
					
				}
			}

		}
		 sort(ans.begin(),ans.end());
		 cout<<"Case "<<++cs<<": "<<ans<<endl;
		//cout<<"-------------------------------------------------"<<endl;
	} 


}