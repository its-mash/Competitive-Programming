#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,v;
    cin>>n>>v;
    int c=n,count=0;
    int ex[n];
    while(n--){
        int k;
        cin>>k;
        bool b=false;
        while(k--){
            int t;
            cin>>t;
            if(v>t)
                b=true;
        }
        if(b){
            ex[count]=c-n;count++;
        }
    }
    cout<<count<<endl;
    if(count){
        for(int i=0;i<count-1;i++)
            cout<<ex[i]<<" ";
        cout<<ex[count-1]<<endl;
    }

}
