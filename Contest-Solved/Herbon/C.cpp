#include <iostream>
using namespace std;

int main(){
    double sum=0,ex[279];
    for(int i=2;i<279;i++){
        sum+=1.0/i;
        ex[i-1]=sum;
    }
    double c;
    cin>>c;
    while(c!=0){
        for(int i=1;i<279;i++){
            if(ex[i]>=c){
                cout<<i<<" card(s)"<<endl;break;
            }
        }
        cin>>c;
    }
}
