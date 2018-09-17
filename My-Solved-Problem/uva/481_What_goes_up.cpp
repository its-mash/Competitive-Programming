#include <bits/stdc++.h>
using namespace std;

int a[1000000],m[1000000],m_id[1000000],p[1000000];
void print(int end){
	if(end<0)return;
	print(p[end]);
	cout<<a[end]<<endl;
}
int main(){
	int i=0,l=0,l_end=0;	
	while(scanf("%d",&a[i])==1){
		int pos=lower_bound(m,m+l,a[i])-m;
		m[pos]=a[i];
		m_id[pos]=i;
		p[i]=pos?m_id[pos-1]:-1;
//		for(int x=0;x<l+1;x++)
//			cout<<m[x]<<" ";
//		cout<<endl;
		if(pos==l){
			l++;
			l_end=i;
		}	
		i++;
	}
	cout<<l<<endl;
	cout<<"-"<<endl;
	print(l_end);
//	for(int i=0;i<l;i++)
//		cout<<m[i]<<endl;
}















////struct Nd{
////	int v;
////	int c;
////	int i;
////
////	Nd(int v,int c,int i){
////		this->v=v;
////		this->c=c;
////		this->i=i;
////	}
////};
//
//int main(){
//	int ex[100000][3]={};
//	int ci=0;
//	int mx=0,ind;
//	while(scanf("%d",&ex[ci][0])==1){
//		ex[ci][1]=1;
//		ex[ci][2]=-1;
//		ci++;
//	}
//	for(int j=ci-2;j>=0;j--){
//		for(int i=ci-1;i>j;i--){
//			if(ex[i][0]>ex[j][0]){
//				if(ex[i][1]+1>=ex[j][1]){
//					ex[j][1]=ex[i][1]+1;
//					ex[j][2]=i;
//					if(ex[j][1]>=mx){
//						mx=ex[j][1];
//						ind=j;
//					}
//				}
//			}
//		}	
//	}
//	cout<<ex[ind][1]<<endl;
//	cout<<"-"<<endl;
//	while(ind>=0){
//		
//		cout<<ex[ind][0]<<endl;
//		ind=ex[ind][2];
//	}
//}
