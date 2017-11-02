#include <bits/stdc++.h>
using namespace std;

int main(){
    int ex[6];
    for(int i=0;i<6;i++){
        cin>>ex[i];
    }
    sort(ex,ex+6);
    int c=0;
    for(int i=0;i<6;i++){
        if(ex[3]==ex[i])
            c++;
    }
    if(c>=4){
        if(ex[0]==ex[5] || (ex[0]==ex[1] && ex[4]==ex[5]))
            cout<<"Elephant"<<endl;
        else
            cout<<"Bear"<<endl;
    }
    else
        cout<<"Alien"<<endl;

}
