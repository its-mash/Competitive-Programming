#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
        long long sum=0,f;
        int ex[n];
        for(int i=0;i<n;i++)
            cin>>ex[i];
        sort(ex,ex+n);
        f=ex[0];
        for(int i=1;i<n;i++){
            f+=ex[i];
            sum+=f;
        }
        cout<<sum<<endl;
        cin>>n;
    }
}
