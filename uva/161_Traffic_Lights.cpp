#include <bits/stdc++.h>
using namespace std;

int main(){
    int tm;
    while(cin>>tm && tm!=0){
        vector<double> ex;
        ex.push_back(tm);
        while(cin>>tm && tm!=0)ex.push_back(tm);
        sort(ex.begin(),ex.end());
        int fe=ex[0],inc=fe+fe,rn=fe-5;
        fe+=fe;
        while(fe<=18000){
            int be=fe,e=fe+rn;
            bool found=true;
            // cout<<endl<<"##"<<fe<<"---------->"<<fe+ex[0]-5<<endl;
            for(int i=1;i<ex.size();i++){
                int c=fe/ex[i];
                int v=ex[i]*(c+1);
                // cout<<ex[i]<<" "<<c<< " "<<v<<" ";
                if(c & 1){
                    // cout<<v<<"->"<<v+ex[i]-5<<" ";
                    if((v<be && v+ex[i]-5<=be) || v>=e){
                        found=false;
                        break;
                    }
                    else{
                        be=max(be,v);
                    }
                    
                }else
                {
                    // cout<<v-ex[i]<<"->"<<v-5<<" ";
                    if(v-5<=be){
                        found=false;
                        break;
                    }
                    else 
                        e=min(e,v-5);
                }
                // if(be>e){
                //     found=false;
                //     break;
                // }
                // cout<<be<<"*"<<e<<endl;
                
            }
            if(found){
                printf("%02d:%02d:%02d\n",be/3600,(be%3600)/60,be%60);
                break;
            }
            fe+=inc;
        }
        if(fe>18000){ 
            cout<<"Signals fail to synchronise in 5 hours"<<endl;
        }

    }
    cin>>tm>>tm;
}