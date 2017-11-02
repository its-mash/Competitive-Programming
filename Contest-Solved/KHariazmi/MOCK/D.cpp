#include <bits/stdc++.h>
using namespace std;

const double eps=0.000001;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int m=1;m<=t;m++){
        int n;
        cin>>n;
        vector<pair<int,int>> ex;
        while(n--){
            int x,y;
            cin>>x>>y;
            ex.push_back(make_pair(x,y));
        }
        int maxx=0;
        for(int i=0;i<ex.size()-1;i++){
            int count =2;
            double xdiff=ex[i].first-ex[i+1].first,ydiff=ex[i].second-ex[i+1].second;
            double mm=(xdiff==0)? -1:ydiff/xdiff;
            for(int j=0;j<ex.size();j++){
                if(i==j || i+1==j)
                    continue;
                //cout<<ex[i].first<<", "<<ex[i].second<<"   "<<ex[j].first<<", "<<ex[j].second<<endl;
                double nx=ex[i].first-ex[j].first,ny=ex[i].second-ex[j].second;
                double mmn=(nx==0)? -1:ny/nx;
                if(nm=-1 && nx=-1)
                if(abs(mm-mmn)<eps){
                    count++;
                    //cout<<ex[i].first<<", "<<ex[i].second<<"   "<<ex[j].first<<", "<<ex[j].second<<endl;
                }
            }
            maxx=max(count,maxx);
        }
        cout<<"Case #"<<m<<": "<<maxx<<endl;
    }
}



