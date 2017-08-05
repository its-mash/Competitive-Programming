#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    double ex[n];
    for(int i=0;i<n;i++){
        cin>>ex[i];
    }
    sort(ex,ex+n);
    if(n==1){
        printf("%.3f\n",ex[0]);return 0;
    }
    double temp=2.0*sqrt(ex[n-2]*ex[n-1]);
    for(int i=n-3;i>=0;i--){
        temp=2.0*sqrt(temp*ex[i]);
    }
    printf("%.3f\n",temp);
}
