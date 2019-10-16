#include <iostream>
using namespace std;

int main(){
    long double h,u,d,f;
    while (cin>>h>>u>>d>>f && h!=0)
    {
        f=u*f/100.0;
        int day=0;
        long double ih=0;
        while(1) {
            day++;
            ih+=u;
            if(ih>h){
                cout<<"success on day "<<day<<endl;
                break;
            }
            ih-=d;
            if(ih<0){
                cout<<"failure on day "<<day<<endl;
                break;
            }
            u-=f;
            if(u<0){
                f=0;u=0;
            }
        }
    }
    
}