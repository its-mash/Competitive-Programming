#include <bits/stdc++.h>
using namespace std;


int main(){
    const int n=50;
    vector<short> ex(n,2);
    ex[1]=1;
    for(int i=2;i<=ex.size();i++){
        for(int j=i+i;j<ex.size();j+=i){
            ex[j]++;
        }
    }
    int count=0;
    for(int i=1;i<ex.size();i++)
        cout<<i<<" "<<ex[i]<<endl;

}
