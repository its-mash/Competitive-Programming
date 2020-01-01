#include <bits/stdc++.h>
using namespace std;



class TaroJiroDividing{
 	public:	
 	int getNumber(int a,int b);	   
};


int TaroJiroDividing::getNumber(int a, int b){

        if(a>b){
            int t=b;
            b=a;
            a=t;
        }
	int l=log2(b/a);
        cout<<"l :"<<l<<endl;
        if(pow(2,l)*a==b){
            int c=0;
            while(!(1<<c & a)){
                c++;
            }
            return ++c;
        }
}

int main(){
	TaroJiroDividing t;
	int a,b;
        while(cin>>a>>b)
        	cout<<t.getNumber(a,b)<<endl;
}
