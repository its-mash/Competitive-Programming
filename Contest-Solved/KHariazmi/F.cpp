#include <iostream>
#include <map>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(){
    //freopen("input","r",stdin);
    int n;
    cin>>n;
    cin.ignore();
    cin.ignore();
    while(n--){
        map<string,int> ex;
        string s;
        int count=0;
        while(getline(cin,s) && !s.empty()){
            ex[s]++;
            count++;
        }
        for(map<string,int>::iterator it=ex.begin();it!=ex.end();it++)
            cout<<it->first<<" "<<fixed<<setprecision(4)<<(it->second*100.0)/count<<endl;
        if(n!=0)
            cout<<endl;
    }
}
