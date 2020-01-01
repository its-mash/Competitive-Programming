#include <bits/stdc++.h>
using namespace std;

double dist(int a,int x,int y){
    return sqrt((a-x)*(a-x)+y*y);
}

int main(){

  int n,r,t=1;
  cin>>n>>r;
  while(n!=0 && r!=0){
      multimap<int,int> ex;
      int nr=0;
      long double rp;
      bool f=1;
      for(int i=0;i<n;i++){
          int x,y;
          cin>>x>>y;
          ex.insert(pair<int,int>(x,y));
      }
      for(multimap<int,int>::iterator it=ex.begin();it!=ex.end();it++){

          int x=it->first,y=it->second;

          if(y>r){
              cout<<-1<<endl;return 0;
          }
          if(f){
              rp=sqrt(r*r-(y*y));
              rp+=x;
              f=false;
              nr++;
          }
          else if(dist(rp,x,y)-r>0.0000000000001){
            rp=sqrt(r*r-(y*y));
            rp+=x;
            nr++;
          }

      }
      cout<<"Case "<<t++<<":"<<nr<<endl;

      cin>>n>>r;
  }
}
