#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.c","r",stdin);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string n1,n2,ans="";
        cin>>n1>>n2;
        if(n2.length()>n1.length()){
            string tm=n1;
            n1=n2;
            n2=tm;
        }
        string trail(n1.length()-n2.length(),'0');
        trail+=n2;
        //cout<<n1<<" "<<trail<<endl;
        int m=0;
        for(int j=n1.length()-1;j>=0;j--){
            int r=(trail[j]-'0')+(n1[j]-'0')+m;
            //cout<<r<<endl;
            ans+=((r%10)+'0');
            m=r/10;
        }
        if(m!=0)ans+=(m+'0');
        //cout<<"|";
        for(int j=ans.length()-1;j>=0;j--)
            cout<<ans[j];
        cout<<endl;
        cout<<endl;

    }
}

