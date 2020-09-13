#include <bits/stdc++.h>
using namespace std;

int main(){
    int sis[3],br[2];
    while(cin>>sis[0]>>sis[1]>>sis[2]>>br[0]>>br[1] && sis[0]!=0){
        bool f[53]={};

        f[sis[0]]=true;
        f[sis[1]]=true;
        f[sis[2]]=true;

        f[br[0]]=true;
        f[br[1]]=true;

        sort(sis,sis+3);
        sort(br,br+2);
        int i=0,j=0,ci=0;
        while(i<3 && j<2){
            if(sis[i]>br[j]){
                j++;
                ci=i;
            }
            i++;
        }
        if(j==1){
            if(ci<2){
                int a=sis[2]+1;
                while(f[a]!=false)a++;
                cout<<((a<53)?a:-1)<<endl;
            }
            else{
                int a=sis[1]+1;
                while(f[a]!=false)a++;
                cout<<((a<53)?a:-1)<<endl;
            }
        }
        else if(j==2){
            cout<<-1<<endl;
        }
        else{
            int a=1;
            while(f[a]!=false)a++;
            cout<<((a<53)?a:-1)<<endl;
        }
    }
}