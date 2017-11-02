#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double sum=0;
    for(int i=0;i<12;i++){
        double t;
        cin>>t;
        sum+=t;
    }
    printf("$%.2f\n",sum/12.0);
}
