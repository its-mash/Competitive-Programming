#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,c=0;
    cin>>n>>s;
    cin.ignore();
    bool flag[n+1];
    fill_n(flag,n+1,0);
    string ex[n];
    for(int i=0;i<n;i++)
        getline(cin,ex[i]);
    stack<int> fx;
    fx.push(s);
    while(!fx.empty()){
        int t=fx.top();
        fx.pop();
        if(!flag[t]){
            flag[t]=true;
            c++;
            istringstream iss(ex[t-1]);
            int tm;
            iss>>tm;
            //cout<<"For "<<t<<endl;
            while(iss>>tm){
                fx.push(tm);
              //  cout<<tm<<" ";
            }
           //cout<<endl;
        }
    }
    cout<<c<<endl;
}

