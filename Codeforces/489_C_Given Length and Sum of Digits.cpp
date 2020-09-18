#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin>>m>>s;

    if(s==0 && m==1){
        cout<<"0 0"<<endl;
        return 0;
    }

    if(s< 1 || s>m*9){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    string bg(m,'0');
    int cs=s;
    for(int i=0;i<m;i++){
        if(s>0){
            int mn=min(s,9);
            bg[i]=bg[i]+mn;
            s-=mn;
        }
    }
    string sm(m,'0');
    s=cs;
    sm[0]='1';
    s--;
    for(int i=m-1;i>=0;i--){
        if(s>0){
            int mn=min(s,9);
            sm[i]=sm[i]+mn;
            s-=mn;
        }
    }
    cout<<sm<<" "<<bg<<endl;
}