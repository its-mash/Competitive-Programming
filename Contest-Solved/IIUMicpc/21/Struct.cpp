#include <iostream>
using namespace std;

struct Birth{
    int d;
    int m;
    int y;
};



void doIt(Birth *x){
    for( int i=0;i<10;i++){
        (x+i)->d=15+i;
        (x+i)->m=12+i;
        (x+i)->y=1994+i;
    }
    for( int i=0;i<10;i++){
        cout<<(*(x+i)).d<<"-"<<(*(x+i)).m<<"-"<<(*(x+i)).y<<endl;
    }
}
void doIt(int *x){
  for(int i=0;i<10;i++)
        cout<<*(x+i)<<endl;
}

int main(){
    Birth p[10];

    /*doIt(&p);
    int ex[10]={};
    doIt(ex);*/

    doIt(p);

}
