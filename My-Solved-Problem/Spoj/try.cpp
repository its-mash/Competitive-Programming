#include <iostream>
using namespace std;

int main(){
    int ex[5];
    for(int i=0;i<5;i++){
        cin>>ex[i];
    }
    int max=ex[0];
    for(int i=0;i<5;i++){
        if(max<ex[i])
            ex[i]=max;
    }
    for(int i=0;i<5;i++)
        cout<<ex[i]<<" ";
    cout<<endl;
    cout<<max<<endl;
}
