#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    while(cin>>r>>c && r!=0){
        bool mp[r+2][c+2]={};
        for(int i=0;i<r+2;i++){
            mp[i][0]=true;
            mp[i][c+1]=true;
        }
        for(int i=0;i<c+2;i++){
            mp[0][i]=true;
            mp[r+1][i]=true;
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                char ch;
                cin>>ch;
                mp[i][j]=(ch=='0')?0:1;
        
            }
        }
        // for(int i=0;i<r+2;i++){
        //     for(int j=0;j<c+2;j++){
        //         cout<<mp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        
        
        int sc[r][c]={};
        int i=r,j=2,f=0;
        if(mp[i][j]){
            i--;
            j--;
        }
        sc[r-1][0]++;
         

        while(!(i==r && j==1)){
            // cout<<i<<" "<<j<< " "<<f<<endl;
            if(f==0){
                if(mp[i][j+1]){
                    f=1;
                }
                else{
                    if(!mp[i+1][j+1])
                        f=3;
                    sc[i-1][j-1]++;
                    j++;
                }
            }
            else if(f==1){
                if(mp[i-1][j]){
                    f=2;
                }
                else{
                    if(!mp[i-1][j+1])
                        f=0;
                    sc[i-1][j-1]++;
                    i--;
                }
            }
            else if(f==2){
                if(mp[i][j-1]){
                    f=3;
                }
                else{
                    if(!mp[i-1][j-1])
                        f=1;
                    sc[i-1][j-1]++;
                    j--;
                }
            }
            else{
                if(mp[i+1][j]){
                    f=0;
                }
                else{
                    if(!mp[i+1][j-1])
                        f=2;
                    sc[i-1][j-1]++;
                    i++;
                }
            }
        }
        int ans[5]={};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!mp[i+1][j+1])
                    ans[sc[i][j]]++;
            }
        }
        for(int i=0;i<5;i++){
            printf("%3d",ans[i]);
        }
        cout<<endl;
    }
}