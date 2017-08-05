#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex[]={"Samir","Amjad", "Asyraf", "Ayeshah", "Zarir"};
    int n;
    cin>>n;
    //n=n-n/7;
    //cout<<n<<endl;

    int up=5;
    for(int i=2;i<){
        up+=up*i;
    }
    cout<<ex[n%5 -(n/7)]<<endl;

    return 0;
}

