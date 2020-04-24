#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,tm;
        cin>>n;
        vector<int> ex[201];
        for(int i=0;i<n;i++){
            cin>>tm;
            ex[tm].push_back(i);
        }

        int ans=INT_MIN;
        for(int i=1;i<201;i++){
            ans=max(int(ex[i].size()),ans);
            if(ex[i].empty())continue;
            for(int j=1;j<201;j++){
                if(ex[j].empty() || i==j || (ex[i].size()+ex[j].size()) <= ans)
                    continue;
                // cout<<i<<" "<<j<<endl;
                int a=0,b=0,c=ex[j].size()-1,d=ex[i].size()-1;
                while(a<d){
                    while(b<=c && ex[j][b]<ex[i][a])b++;
                    while(b<=c && ex[j][c]>ex[i][d])c--;
                    if(b>c)break;
                    
                    ans=max(ans,a+a+2+c-b+1);
                    a++;
                    d--;
                }

            }
        }
        cout<<ans<<endl;
    }
}