#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        set< pair<int,int> > ex;
        int n,c;
        cin>>n;
        c=n;
        int count[n]={};
        while(n--){
            cin>>a>>b;
            ex.insert(make_pair(a,b));
        }
        int i=0,j;

        for(set< pair<int,int> >::iterator it=ex.begin();it!=ex.end();it++,i++){
            j=0;
            for(set< pair<int,int> >::iterator jt=it;jt->first < it->second && jt!=ex.end();jt++,j++){
                count[i+j]++;
            }
        }
        cout<<*max_element(count,count+c)<<endl;
    }
}
