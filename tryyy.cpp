#include <iostream>
using namespace std;
int main(){
    int x=54,*y=&x,p=*y,*pp=&x;
    double ex=545,*dd=&ex;
    ex= p;
    ex=*p;
    *p=ex;
    *pp=ex;
    char ch[]={'s','d'};
    char cd=&ch;
    ch=cd;
}