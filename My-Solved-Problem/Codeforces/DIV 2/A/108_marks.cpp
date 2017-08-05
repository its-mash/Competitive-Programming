#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    string ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    bool best[n];
    memset(best,0,n);

    for(int j=0;j<m;j++){
        char ch=ex[0][j];
        int index=0;
        for(int i=0;i<n;i++){
          // cout<<ex[i][j]<<" "<<ch<<" i= "<<i<<" j= "<<j<<endl;
            if(ch<ex[i][j])
            {
                ch=ex[i][j];index=i;
            }
        }
        //cout<<index<<endl;
        best[index]=true;
        for(int i=0;i<n;i++){
            if(ex[i][j]==ex[index][j])
            {
                best[i]=true;
            }
        }
       /* cout<<"--- ";
        for(int i=0;i<n;i++)
            cout<<best[i]<<" ";
        cout<<endl;*/
    }
    int c=0;
    for(int i=0;i<n;i++)
        if(best[i])
            c++;
    cout<<c<<endl;

}
