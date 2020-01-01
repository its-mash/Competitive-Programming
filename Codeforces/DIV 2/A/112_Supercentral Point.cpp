#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ex[n][2];
    for(int i=0;i<n;i++)
        cin>>ex[i][0]>>ex[i][1];
    int count=0;
    for(int i=0;i<n;i++){
        bool r=false,l=false,u=false,d=false;
       // cout<<"TArget "<<ex[i][0]<<" "<<ex[i][1]<<endl;
        for(int j=0;j<n;j++){


                //cout<<"CHeck "<<ex[j][0]<<" "<<ex[j][1]<<endl;
                if(ex[i][0]==ex[j][0]){
                    if(ex[i][1]<ex[j][1])
                        u=true;
                    else if(ex[i][1]>ex[j][1])
                        d=true;
                }
                else if (ex[i][1]==ex[j][1]){
                    if(ex[i][0]<ex[j][0])
                        r=true;
                    else if(ex[i][0]>ex[j][0])
                        l=true;
                }

            if(r && l && u && d){
                count++;
                break;
               // cout<<ex[i][0]<<" "<<ex[i][1]<<endl;
            }
           // cout<<"Status "<<u<<" "<<d<<" "<<l<<" "<<r<<endl;

        }


    }
    cout<<count<<endl;
}
