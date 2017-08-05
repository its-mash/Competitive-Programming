#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,v;
    cin>>n>>v;
    map<int,int> ex;
    while(n--){
        int a,b;
        cin>>a>>b;
        ex[a]+=b;
    }
    int ans=0,prevIndex=ex.begin()->first -1,remain=0;
    for(map<int,int>:: iterator it=ex.begin();it!=ex.end();it++){
        if(it->first - prevIndex == 1){
            if(it->second + remain<= v ){
                ans+=it->second + remain;
                remain=0;
            }
            else{
                ans+=v;
                if(remain >= v)
                    remain=it->second;
                else
                    remain=it->second - (v-remain);
                //remain=it->second - max(v-remain,0);
            }
        }
        else{
            ans+=min(remain,v);
            ans+=min(it->second,v);
            if(it->second >=v )
                remain=it->second - v;
            else
                remain=0;

        }
        prevIndex=it->first;
       // cout<<ans<<" "<<remain<<endl;
    }
    ans+=min(remain,v);
    cout<<ans<<endl;
}
