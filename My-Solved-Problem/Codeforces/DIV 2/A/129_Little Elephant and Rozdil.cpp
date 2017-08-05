#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<pair<int,int> > ex;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        ex.push_back(make_pair(t,i));
    }
    sort(ex.begin(),ex.end());
    if(ex.begin()->first!=(ex.begin()+1)->first)
        cout<<ex.begin()->second+1<<endl;
    else
        cout<<"Still Rozdil"<<endl;

}
