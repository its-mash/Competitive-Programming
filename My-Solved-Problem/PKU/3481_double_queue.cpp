#include <iostream>
#include <cstdlib>
#include <set>

using namespace std;

int main(){
    int pk[10000001];
    set<int> ex;
    int cm;
    while(cin>>cm && cm!=0){
        //cout<<cm<<endl;
        if(cm==1){
            int k,p;
            cin>>k>>p;
            ex.insert(p);
            pk[p]=k;
        }
        else if(ex.empty())
            cout<<0<<endl;
        else if(cm==2){
           set<int>::iterator  it=ex.end();
            it--;
            cout<<pk[*it]<<endl;
            ex.erase(it);
        }
        else{
            cout<<pk[*ex.begin()]<<endl;
            ex.erase(ex.begin());
        }
    }
}
