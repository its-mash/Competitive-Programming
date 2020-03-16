#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   int cs=t;
   while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       int ans;
       if(a>b)
          if(b>c)
              ans=b;
          else if(a>c)
              ans=c;
          else
              ans=a;
       else
            if(a>c)
              ans=a;
            else if(c>b)
              ans=b;
            else
              ans=c;
        cout<<"Case "<<cs-t<<": "<<ans<<endl;
        
          
   } 
}