#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first * b.second < b.first * a.second;
}

int gcd(int a, int b)
{
    if (b == 0)
       return a;
    return gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int> > ex;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++)
                if(gcd(j,i)==1){
                    ex.push_back(make_pair(i,j));
                }

        }
        sort(ex.begin(),ex.end(),cmp);
        printf("%d/%d",ex[0].first,ex[0].second);
      //  cout<<ex[0].first<<"/"<<ex[0].second;
        for (int i = 1; i < ex.size(); ++i)
         //   cout<<","<<ex[i].first<<"/"<<ex[i].second;
            printf(",%d/%d",ex[i].first,ex[i].second);
        printf("\n");
        //cout<<endl;
    }
}
