#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mp[n+1];
        int tm;
        int count[n+2]={};
        priority_queue<int> mx;
        for(int i=1;i<=n;i++)
        {
            cin>>tm;
            mp[tm]=i;
            count[i]=1;
            mx.push(1);
        }

        bool taken[n+1]={};
        int cm;
        bool y=true;
        for(int i=1;i<=n;i++){
            cm=mx.top();
            mx.pop();
            // cout<<cm<<endl;
            int in=mp[i];
            if(cm!=count[in]){
                y=false;
                break;
            }
            taken[in]=true;
            if(!taken[in+1])
            {
                int pin=in+1;
                while(pin<=n && taken[pin])pin++;
                if(pin<=n)count[pin]+=count[in];
            }
            count[in]=0;
            mx.push(count[in+1]);

            // for(int j=1;j<=n;j++){
            //     cout<<count[j]<<" ";
            // }
            // cout<<endl;
        }
        if(y)
            cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
        

        // cout<<endl;
    }
}