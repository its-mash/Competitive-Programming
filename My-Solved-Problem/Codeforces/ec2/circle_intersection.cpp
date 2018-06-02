#include <bits/stdc++.h>
using namespace std;

#define ld long double

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	cout<<setprecision(20)<<fixed;

	ld x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	
	ld d2=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),d=sqrt(d2);
	if(d<=abs(r1-r2))
		cout<<acos(-1)*min(r1,r2)*min(r1,r2)<<endl;
	else if(d<r1+r2){
//		ld dl=(d2+r1*r1-r2*r2)/(2*d),dr=(d2+r2*r2-r1*r1)/(2*d),al1=acos(dl/r1),al2=acos(dr/r2);
//		ld s1=acos(dl/r1)*r1*r1,s2=acos(dr/r2)*r2*r2,a1=r1*r1*sin(al1)*cos(al1),a2=r2*r2*sin(al2)*cos(al2);
//		cout<<s1+s2-a2-a1<<endl;

		ld dl=(d2+r1*r1-r2*r2)/(2*d),dr=(d2+r2*r2-r1*r1)/(2*d);
		ld s1=acos(dl/r1)*r1*r1,s2=acos(dr/r2)*r2*r2,a1=sin(2*acos(dl/r1))*r1*r1/2,a2=sin(2*acos(dr/r2))*r2*r2/2;
		cout<<s1+s2-a2-a1<<endl;

//		ld dl=(d2+r1*r1-r2*r2)/(2*d),dr=(d2+r2*r2-r1*r1)/(2*d);
//		ld s1=acos(dl/r1)*r1*r1,s2=acos(dr/r2)*r2*r2,a1=r1*r1*sin(al1)*cos(al1),a2=r2*r2*sin(al2)*cos(al2);
//		cout<<s1+s2-a2-a1<<endl;
	}
	else
		cout<<0.0<<endl;

}

