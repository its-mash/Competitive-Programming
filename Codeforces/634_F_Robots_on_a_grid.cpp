#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c,n;
        cin>>r>>c;
        n=r*c;
        bool black[n]={};
        char ch;
        for(int i=0;i<n;i++){
            cin>>ch;
            black[i]=(ch=='1');
        }
        int mp[n];
        bool cor[n]={};
        for(int i=0;i<n;i++){
            cin>>ch;
            if(ch=='L')
                mp[i]=i-1;
            else if(ch=='R')
                mp[i]=i+1;
            else if(ch=='U')
                mp[i]=i-r;
            else
                mp[i]=i+r;
            cor[mp[i]]=true;
        }
        int foundAt=1;
        int foundRec[n]={};

        int t_ans=0,b_ans=0;

        for(int i=0;i<n;i++){
            if(!cor[i]){
                foundRec[i]=foundAt++;

                int next=mp[i];
                vector<int> in;
                in.push_back(i);
                while (foundRec[next]==0){
                    foundRec[next]=foundAt++;
                    in.push_back(next);
                    ;
                    next=mp[next];
                }
                if(foundRec[next]>foundRec[i]){
                    int cc=foundAt-foundRec[next];
                    int oc=foundRec[next]-foundRec[i];

                    int ci=i;
                    while(oc>cc){ci++;oc--;}

                    

                    int cnext=next;
                    do{
                        t_ans++;

                        if(!black[cnext])b_ans++;


                        cnext=mp[cnext];
                    }
                    while(cnext!=next);
                }
                else{

                }
                
            }
        }

    }
}