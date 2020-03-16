#include <bits/stdc++.h>
using namespace std;

struct Proposal{
    int count;
    string name;
    double price;
    bool operator <(Proposal p) const{
        if(count>p.count)
            return true;
        if(p.count==count && price<p.price){
            return true;
        }
        return false;
    }
};

int main(){
    int n,p,cs=1;
    while(cin>>n>>p && n!=0 && p!=0){
        cin.ignore();
        string fk;
        while(n--)getline(cin,fk);
        //cout<<"--->"<<fk<<endl;
        Proposal pr[p];
        for(int i=0;i<p;i++){
            getline(cin,pr[i].name);
            cin>>pr[i].price>>pr[i].count;
            int c=pr[i].count;
            
            cin.ignore();
            while(c--)getline(cin,fk);
           // cout<<"---_"<<fk<<endl;
        }
        sort(pr,pr+p);
        if(cs>1)cout<<endl;
        cout<<"RFP #"<<cs++<<endl;
        cout<<pr[0].name<<endl;
    }
}