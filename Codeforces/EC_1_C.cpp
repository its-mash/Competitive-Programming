#include <bits/stdc++.h>
using namespace std;
struct Vec{
	long double angle;
	int index;

	bool operator <(const Vec &r){
		return angle < r.angle;
	}

};
int main(){
	int n;
	cin>>n;
	Vec ex[n];
	for(int i=0;i<n;i++){
		long double x,y;
		cin>>x>>y;
		double angle=atan2(y,x);
		if(angle<0)
			angle+=2*acos(-1);
		ex[i].angle=angle;
		ex[i].index=i;
	};
	sort(ex,ex+n);
	// for(int i=0;i<n;i++){
	// 	cout<<ex[i].angle<< " "<<ex[i].index<<endl;
	// }
	long double dif=INT_MAX;
	int ax,ay;

	for(int i=0;i<n;i++){
		int ni=(i+1)%n;
		long double cdif=fabs(ex[ni].angle-ex[i].angle);
		if(cdif<dif){
			dif=cdif;
			ax=ex[i].index;
			ay=ex[ni].index;
		}
	}
	cout<<ax+1<<" "<<ay+1<<endl;
}










// #include <bits/stdc++.h>
// using namespace std;
// // int ep=1000000; 
// struct Vec{
// 	long double x;
// 	long double y;
// 	long double sq;
// 	int index;
// 	int lq;
// 	bool operator < (Vec & r){
// 		int rq=r.lq;
// 		if(lq==rq){
// 			if(lq<2){
// 				if(x!=r.x){
// 					return y/x > r.y/r.x;
// 				}
// 				else
// 				{
// 					return y>r.y;
// 				}
				
// 			}
// 			else
// 			{
// 				if(x!=r.x){
// 					return y/x > r.y/r.x;
// 				}
// 				else
// 				{
// 					return y<r.y;
// 				}
				
// 			}
			
// 		}
// 		else
// 		{
// 			return  lq<rq;
// 		}
		
// 	}
// 	void quarter(){
// 		if(x>=0)
// 			lq=1;
// 		else
// 			lq=2;
// 	}
// 	void calSQ(){
// 		long double m=x*x+y*y;
// 		sq=sqrtl(m);
// 		// cout<<setprecision(20)<<"M "<<x<<" "<<y<<" "<<m<<endl;
// 		// cout<<setprecision(20)<<" sq "<<y<<" "<<sq<<endl;
// 	}
// };
 
// int main(){
// 	int n;
// 	cin>>n;
// 	Vec ex[n];
// 	for(int i=0;i<n;i++){
// 		cin>>ex[i].x>>ex[i].y;
// 		// ex[i].x*=ep;
// 		// ex[i].y*=ep;
// 		ex[i].calSQ();
// 		ex[i].quarter();
// 		ex[i].index=i+1;
// 	}
// 	sort(ex,ex+n);
// 	long double mn=-2;
// 	int cl,cr;
// 	for(int i=0;i<n-1;i++){
// 		long double v=ex[i].x*ex[i+1].x+ex[i].y*ex[i+1].y;
// 		v/=(ex[i].sq*ex[i+1].sq);
// 		// cout<<setprecision(128)<<"V "<< acos(v)<<" "<<ex[i].sq<<" "<<ex[i+1].sq<<" "<<ex[i].sq*ex[i+1].sq <<endl;
// 		if(mn < v){
// 			mn=v;
// 			cl=ex[i].index;
// 			cr=ex[i+1].index;
			
// 		}
 
// 	}
// 	for(int i=0;i<n;i++)
// 		cout<<ex[i].x<<" " <<ex[i].y<<" "<<ex[i].lq<<endl;

// 	long double v=ex[0].x*ex[n-1].x+ex[0].y*ex[n-1].y;
// 	v/=ex[0].sq*ex[n-1].sq;
// 	cout<<v<<endl;
// 	if(mn<v){
// 		mn=v;
// 		cl=ex[0].index;
// 		cr=ex[n-1].index;
		
// 	}
// 	cout<<cl<<" "<<cr<<endl;
// }