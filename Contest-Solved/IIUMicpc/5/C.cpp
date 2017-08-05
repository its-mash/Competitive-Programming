#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,maxx,minn;
    cin>>t;
    cin>>minn>>maxx;
    for(int i=1;i<=t;i++){
        int f,c=0;
        cin>>f;
        string ans="";
        bool b=false;
        while(f--){
            string s;
            int tm;
            cin>>s>>tm;
            if(c+tm<=maxx){
                c+=tm;
            }else{
                b=true;
                ans+=s;
                ans+=" ";
            }
        }
        //cout<<c<<endl;
        if(c<minn){
            cout<<"Day "<<i<<": Good day but not enough. Eat at least "<<minn-c<<" more calories."<<endl;
        }
        else if(c<=maxx && !b){
            cout<<"Day "<<i<<": Perfect day! Good job."<<endl;
        }
        else {
            cout<<"Day "<<i<<": Slow down dude! You should not eat: "<<ans<<endl;
        }
    }

}

