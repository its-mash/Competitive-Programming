#include <bits/stdc++.h>
using namespace std;

string getKey(string ex){
    ex.erase(remove_if(ex.begin(),ex.end(),::isspace),ex.end());
    sort(ex.begin(),ex.end());
    return ex;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    string ex;
    getline(cin,ex);
    while(t--){
        map<string,vector<string> > mp;
        while(getline(cin,ex) && !ex.empty()){
            // cout<<getKey(ex)<<" "<<ex<<endl;
            mp[getKey(ex)].push_back(ex);
        }
        set<string> final;
        for(auto row:mp){
            vector<string> rw=row.second;
            sort(rw.begin(),rw.end());
            for(vector<string>::iterator it=rw.begin();it!=prev(rw.end());it++){
                for(vector<string>::iterator jt=next(it);jt!=rw.end();jt++){
                    // cout<<*it<<" = "<<*jt<<endl;
                    final.insert(*it+" = "+*jt);
                }
            }

        }
        for(auto x:final)
            cout<<x<<endl;
        if(t)
             cout<<endl;
    }

}