#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    cin.ignore();
    int cs=1;
    while(t--){
       char ex[10001],ch;
       int c=0;
       while(cin.get(ch) && ch!='\n'){
           if(ch>='a' && ch<='z')  ex[c++]=ch;
       }
       bool ans=true;
       int k=sqrt(c);
    //    cout<<"K"<<k<<endl;
       if(k*k==c){
            bool ld=true,lr=true;
            for(int i=0;i<c;i++)   
            {
                if(ex[i]!=ex[c-i-1])lr=false;
                // cout<<i%k<<","<<i/k<< " =  "<<(k-(i%k)-1)*k+k-1-i/k<<" "<<<<endl;
                if(ex[(i%k)*k+(i/k)]!=ex[c-1-(i%k)*k-(i/k)])ld=false;
            }
            ans=ld && lr;
       }
       else 
           ans=false;
       cout<<"Case #"<<cs++<<":"<<endl;
       if(ans){
           cout<<k<<endl;
       } else
       {
           cout<<"No magic :("<<endl;
       }
       
    }
}