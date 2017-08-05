#include <iostream>
using namespace std;

int main(){
    //freopen("input","r",stdin);
    int n,m,tcase=0;
    int x[]={-1,-1,-1,0,0,1,1,1};
    int y[]={-1, 0 ,1,-1,1,-1,0,1};
    cin>>n>>m;
    while(n!=0 || m!=0){
        tcase++;
        int ex[n][m];
        for(int i=0;i<n;i++){
            string tmp;
            cin>>tmp;
            for(int j=0;j<m;j++){
                ex[i][j]=(tmp[j]=='.')? 0 : -1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ex[i][j]==-1){
                    for(int k=0;k<8;k++){
                        int nx=x[k]+i,ny=y[k]+j;
                        if(nx>=0 && nx<n && ny>=0 && ny<m){
                                if(ex[nx][ny]!=-1)
                                    ex[nx][ny]++;
                        }
                    }
                }
            }
        }
        cout<<"Field #"<<tcase<<":"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ex[i][j]==-1)
                    cout<<"*";
			    else
			        cout<<ex[i][j];
            }
            cout<<endl;
        }
        cin>>n>>m;
        //cout<<"dddddddddd "<<n<<m<<endl;
        if(n!=0 || m!=0)
            cout<<endl;
    }
}
