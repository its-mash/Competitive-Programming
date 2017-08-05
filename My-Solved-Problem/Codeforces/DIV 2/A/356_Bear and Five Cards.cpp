
#include <bits/stdc++.h>

using namespace std;

int main(){
    int ex[5],sum=0,best;
    for(int i=0;i<5;i++){
         cin>>ex[i];
         sum+=ex[i];
    }
    best=sum;
    for(int i=0;i<4;i++){
        int count=1;
        for(int j=i+1;j<5;j++){
            if(ex[i]==ex[j])
                count++;
        }
       // cout<<ex[i]<<" "<<count<<endl;
        if(count>3)count=3;

        if(count > 1 && best > (sum-(ex[i]*count)))
           best=(sum-(ex[i]*count));
    }
    cout<<best<<endl;

}
