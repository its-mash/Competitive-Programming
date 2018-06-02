#include <bits/stdc++.h>
using namespace std;
//
//int ex[10001],qq=41;
//void gen(int u,int sum,int s){
//	if(sum>qq)
//		return;
//    for(int i=1;i<7;i++){
//        int v=(u+i)%7+(u+i>6);
//		if(u+v==7 || u==v)continue;
//        if(sum+v<=qq && s+1<ex[sum+v]){
//            ex[sum+v]=s+1;
//        }
//        gen(v,sum+v,s+1);
//    }	
//}

int main(){
//	fill_n(ex,10001,INT_MAX);	
//	gen(1,0,0);
//	for(int i=1;i<=qq;i++)
//		cout<<ex[i]<<" ";
//	cout<<endl;
	int t,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    scanf("%d",&x);
		int ans=-1;
//		cout<<x<<"->"<<endl;
//		x=i;
		if(x==7){
			cout<<3<<endl;
			continue;
		}
		if(x>1){
			ans=1;
			if(x>5){
				x-=6;
				ans+=x/11*2;
				
//				cout<<"   "<<x<<" "<<ans<<endl;
				x%=11;
				ans+=(x<6)?1:2;

			}
		}
		cout<<ans<<endl;
	}
}
