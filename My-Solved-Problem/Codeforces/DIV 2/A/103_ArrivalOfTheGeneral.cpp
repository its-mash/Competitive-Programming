#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp,max,min,minIndex=0,maxIndex=0;
    cin>>max;
    min=max;
    for(int i=1;i<n;i++){
        cin>>temp;
        if(min>=temp){
            min=temp;minIndex=i;
        }
        if(max<temp){
            max=temp;maxIndex=i;
        }
    }
    //cout<<maxIndex<<" "<<minIndex<<endl;
    cout<<((maxIndex>minIndex)?maxIndex+(n-minIndex-2): maxIndex+(n-1-minIndex))<<endl;
    return 0;
}


