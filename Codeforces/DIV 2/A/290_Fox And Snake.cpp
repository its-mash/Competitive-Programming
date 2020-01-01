#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        if(i%2==1){
            string ex(c,'#');
            cout<<ex<<endl;
        }
        else{
            string ex(c,'.');
            if((i/2)%2==0){
                ex[0]='#';
            }
            else{
                ex[c-1]='#';
            }
            cout<<ex<<endl;
        }
    }

}
