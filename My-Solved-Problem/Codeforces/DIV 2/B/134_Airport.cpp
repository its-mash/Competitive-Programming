#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c,cc;
    cin>>n>>m;
    c=n;cc=n;
    long long ex[m],mi=0,ma=0;
    for(int i=0;i<m;i++)
        cin>>ex[i];
    sort(ex,ex+m);
    int eq=1,i;

    for(i=m-2;i>=0 && cc!=0;i--){
       // cout<<" i "<<i<<" "<<eq<<" "<<ex[i]<<" "<<ex[i+1]<<endl;
        if(ex[i]<ex[i+1]){
           // cout<<"CC "<<cc<<" "<<(ex[i+1]-ex[i])*eq<<endl;
            if(cc<=(ex[i+1]-ex[i])*eq){
                ma+=eq*(((cc/eq)*(2*ex[i+1]-cc/eq+1))/2);
              //  cout<<" Ma 1: "<<ma<<endl;
                ma+=(cc%eq)*(ex[i+1]-cc/eq);
               // cout<<" Ma 2: "<<ma<<endl;
                break;
            }
            else{
                ma+=eq*(((ex[i+1]-ex[i])*(ex[i+1]+ex[i]+1))/2);
                //cout<<" Ma 3: "<<ma<<endl;
                cc-=eq*(ex[i+1]-ex[i]);
            }
        }
        eq++;

    }
    //cout<<"ff "<<i<<" "<<cc<<" "<<eq<<endl;
    if(i==-1){
        ma+=eq*(((cc/eq)*(2*ex[0]-cc/eq+1))/2);
       // cout<<" Ma 5: "<<ma<<endl;
        ma+=(cc%eq)*(ex[0]-cc/eq);
      // cout<<" Ma 6: "<<ma<<endl;
    }

    cout<<ma<<" ";
    if(m==1){
        cout<<ma<<endl;return 0;
    }
    for(int i=0;i<m;i++){
        if(ex[i]<=c){
            mi+=(ex[i]*(ex[i]+1))/2;
            c-=ex[i];
        }
        else{
            mi+=(c*(2*ex[i]-c+1))/2;break;
        }
    }
    cout<<mi<<endl;

}
