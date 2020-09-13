#include <bits/stdc++.h>
using namespace std;

int main(){
    int rn;
    while(cin>>rn && rn!=-1){
        char ch;
        cin.ignore();
        int ex[26]={},l=0;
        bool fx[26]={};
        while(cin.get(ch)&& ch!='\n'){
            ex[ch-'a']++;
            l++;
            fx[ch-'a']=true;
        }

        int ans=0,s=7;
        while(cin.get(ch)&& ch!='\n'){
           if(fx[ch-'a']){
               l-=ex[ch-'a'];
               ex[ch-'a']=0;
           }
           else
           {   fx[ch-'a']=true;
               s--;
           }
        //    cout<<s<<" "<<l<<endl;
           if(s==0 && ans==0)ans=1; 
           if(l==0 && ans==0)ans=2; 
        }
        string a[]={"You chickened out.","You lose.","You win."};
        cout<<"Round "<<rn<<endl;
        cout<<a[ans]<<endl;
        
    }
}