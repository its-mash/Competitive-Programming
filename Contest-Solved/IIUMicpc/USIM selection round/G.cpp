
#include <bits/stdc++.h>
using namespace std;

int main(){
    double r,h;
    double ex[4];
    cin>>r>>h>>ex[0]>>ex[1]>>ex[2]>>ex[3];
    double max=ex[0];
    for(int i=1;i<4;i++)
        if(max<ex[i])
            max=ex[i];

    double ans=(4*r*4*r*max)-(acos(-1)*r*r*h);
    printf("%.6f\n",ans);

}




