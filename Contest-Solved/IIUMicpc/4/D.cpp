#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m,c,tt=1;
    cin>>n>>m>>c;
    while(n!=0 && m!=0 && c!=0){
        pair<int,bool> ex[n];
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            ex[i]=make_pair(t,false);
        }
        int maxx=0,current=0;
        bool b=true;
        while(m--){
            int t;
            cin>>t;
            if(ex[t-1].second==false){
                current+=ex[t-1].first;
                ex[t-1].second=true;
                maxx=max(maxx,current);
            }
            else{
                current-=ex[t-1].first;
                ex[t-1].second=false;
            }
            if(current>c){
                b=false;
            }
        }
        if(b){
            cout<<"Semester "<<tt<<" was a success."<<endl
                <<"Maximal hours was "<<maxx<<"."<<endl<<endl;
        }
        else
            cout<<"Semester "<<tt<<" was a fail."<<endl<<endl;
        tt++;
        cin>>n>>m>>c;
    }


}


