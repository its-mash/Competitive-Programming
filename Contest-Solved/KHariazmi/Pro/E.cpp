#include <bits/stdc++.h>
using namespace std;

string ans="No";

void swap(char * a, char *b ){
    char tm;
    tm=*a;
    *a=*b;
    *b=tm;
}

void solve(string ex,int b,int e,string cmp){

    if(b==e && ex==cmp){
         ans="Yes";
    }
    for(int i=b;i<=e;i++){
        swap(ex[b],ex[i]);
        solve(ex,b+1,e,cmp);
        swap(ex[b],ex[i]);
    }
}

int main(){
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        string ex,cmp;
        cin>>ex>>cmp;
        solve(ex,0,ex.length()-1,cmp);
        cout<<"Case "<<i+1<<": "<<ans<<endl;
        ans="No";
    }
}

