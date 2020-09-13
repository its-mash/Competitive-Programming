#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int sc[12]={};
        bool f[12]={};
        for(int i=0;i<3;i++){
            string a,b,w;
            cin>>a>>b>>w;
            int ch=(w=="up")?1:((w=="down")?-1:0);
            for(int j=0;j<a.length();j++){
                int l=a[j]-'A',r=b[j]-'A';
                if(w=="even"){
                    sc[l]=sc[r]=0;
                    f[l]=f[r]=true;
                }
                if(!f[l]){
                    sc[l]-=ch;
                }
                if(!f[r]){
                    sc[r]+=ch;
                }
            }
        }
        int mx=0,ind=0;
        for(int i=0;i<12;i++){
            cout<<sc[i]<<" ";
            if(abs(mx)<abs(sc[i])){
                mx=sc[i];
                ind=i;
            }
        }
        cout<<endl;
        cout<<char('A'+ind)<<" is the counterfeit coin and it is "<<((mx>0)?"light":"heavy")<<"."<<endl;
    }
}