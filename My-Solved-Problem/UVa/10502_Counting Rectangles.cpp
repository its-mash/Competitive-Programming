#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    while(cin>>r>>c && c!=0){
            //cout<<r<<" gg "<<c<<endl;
            int ans=0;
            string ex[r];
            for(int i=0;i<r;i++){
                cin>>ex[i];
            }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(ex[i][j]=='1'){
                        int vw=c;
                        for(int h=i;h<r;h++){
                            for(int w=j;w<vw;w++){
                                if(ex[h][w]=='1')
                                    ans++;
                                else{
                                    vw=w;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            cout<<ans<<endl;
    }
}
