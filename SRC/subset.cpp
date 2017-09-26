#include <bits/stdc++.h>
using namespace std;

const int n=3;
int main(){

    int ex[n];
    for(int i=0;i<n;i++)
        ex[i]=i;
    for(int i=0;i < (1<<n) ; i++){
        for(int j=0;j<n;j++)
            if(i & (1<<j))
                cout<<ex[j];
        cout<<endl;
    }

}
