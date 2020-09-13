#include <bits/stdc++.h>
using namespace std;

string getKey(string ex){
    transform(ex.begin(),ex.end(),ex.begin(),::tolower);
    sort(ex.begin(),ex.end());
    return ex;
}
int main(){
    map<string,int> mp;
    string ex;
    vector<string> order;
    while(cin>>ex && ex!="#"){
        // cout<<getKey(ex)<<" "<<ex<<endl;
        mp[getKey(ex)]++;
        order.push_back(ex);
    }
    sort(order.begin(),order.end());
    for(int i=0;i<order.size();i++){
        // cout<<order[i]<<" "<<getKey(order[i])<<endl;
        if(mp[getKey(order[i])]==1 || order[i].length()==1){
            cout<<order[i]<<endl;
        }
    }
}