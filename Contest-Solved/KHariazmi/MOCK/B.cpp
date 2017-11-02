#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int m=1;m<=t;m++){
        int n;
        cin>>n;
        int ex[n];
        for(int i=0;i<n;i++)
            cin>>ex[i];
        int maxx=0;
        for(int i=0;i<n-1;i++){
            int neg=0,pos=0;
            for(int j=i;j<n;j++){
                if(ex[j]>=0)
                    pos++;
                else
                    neg++;
                //cout<<ex[j]<<" ";
                if(neg==pos){
                    //cout<<neg<<" neee "<<endl;
                    maxx=max(neg*2,maxx);
                }


            }
            //cout<<endl;
        }
        cout<<"Case #"<<m<<": "<<maxx<<endl;
    }
}


