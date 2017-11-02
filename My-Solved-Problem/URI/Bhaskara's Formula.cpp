#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a!=0){
        double d= b*b - 4*a*c;
        d=sqrt(d);
        b=b*-1;
        if(d>=0){
            printf("R1 = %.5f\nR2 = %.5f\n",(b+d)/(2*a),(b-d)/(2*a));return 0;
        }
    }
    cout<<"Impossivel calcular"<<endl;
}
