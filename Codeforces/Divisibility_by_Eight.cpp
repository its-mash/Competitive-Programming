#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(false);
    string ex;
    cin>>ex;
    int ln=ex.length();
    for(int i=0;i<ln;i++){
        if((ex[i]-'0')%8==0){
            cout<<("YES")<<endl;
            cout<<ex[i]<<endl;
            return 0;
        }

    }
    for(int i=0;i<ln-1;i++){
        for(int j=i+1;j<ln;j++){
            int tx=(ex[i]-'0')*10+(ex[j]-'0');
            if(tx%8==0){
                cout<<"YES"<<endl<<tx<<endl;return 0;
            }

        }
    }
    for(int i=0;i<ln-2;i++){
        for(int j=i+1;j<ln-1;j++){
            for(int k=j+1;k<ln;k++){
                int tx=(ex[i]-'0')*100+(ex[j]-'0')*10+(ex[k]-'0');
                if(tx%8==0){
                    cout<<"YES"<<endl<<tx<<endl;return 0;
                }
        //        cout<<ex[i]<<ex[j]<<ex[k]<<endl;

            }
        }
    }
    cout<<"NO"<<endl;
    return 0;

}