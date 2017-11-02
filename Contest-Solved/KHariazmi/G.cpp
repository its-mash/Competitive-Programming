#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    while(n!=0 || m!=0){
        string ans="NO CONFLICT";
        multimap<int,int> ex;
        while(n--){
            int b,e;
            cin>>b>>e;
            ex.insert(make_pair(b,e));
        }
        int re[m][3];
        for(int i=0;i<m;i++)
            cin>>re[i][0]>>re[i][1]>>re[i][2];
        bool ss=true;
        for(auto it=ex.begin();it!=ex.end() && ss;it++){
            //cout<<"ddd "<<it->first <<" "<< prev(it,1)->second<<endl;
            if(it!=ex.begin()){
                if(it->first < prev(it,1)->second){
                    ans="CONFLICT";break;
                }
            }
            for(int i=0;i<m;i++){
                double b=re[i][0]+(it->first/double(re[i][2]))*re[i][2],e=b+(re[i][1]-re[i][0]);
                double b1=re[i][0]+(it->second/double(re[i][2]))*re[i][2];
                if( (e >= it->first &&  e <= it->second) || (b1 >= it->first && b1 < it->second) ){
                    ans="CONFLICT";ss=false;break;
                }
            }
        }

        cout<<ans<<endl;

        cin>>n>>m;
    }
}
