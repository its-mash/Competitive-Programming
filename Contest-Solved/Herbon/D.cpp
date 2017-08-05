#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int value(string ex){
    int val=0;
    for(int i=0;i<ex.length()-1;i++){
        for(int j=i+1;j<ex.length();j++){
            if(ex[j]<ex[i])
                val++;
        }
    }
    return val;
}

bool cmp (const pair<string,int>  &a, const pair<string,int> &b ){
    return a.second <= b.second;
}

int main(){

    int n,m;
    cin>>n>>m;
    vector< pair<string,int> > fx;
    for(int i=0;i<m;i++){
        string ex;
        cin>>ex;
        fx.push_back(make_pair(ex,value(ex)));
    }
    sort(fx.begin(),fx.end(),cmp);
    for(int i=0;i<m;i++){
        cout<<fx[i].first<<endl;
    }
}
