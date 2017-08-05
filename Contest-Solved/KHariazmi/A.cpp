#include <iostream>
#include <map>
using namespace std;

int main(){

    long long n,m;
    cin>>n>>m;
    while(n!=0 && m!=0){
        map<long long,int> ex;
        while(n--){
            long long t;
            cin>>t;
            ex[t]=5;
        }
        long long count=0;
        while(m--){
            long long t;
            cin>>t;
            if(ex[t]==5)
                count++;
        }
        cout<<count<<endl;
        cin>>n>>m;
    }

}
