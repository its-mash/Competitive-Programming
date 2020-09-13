#include <bits/stdc++.h>
using namespace std;

map<string,set<string> > ctg;
map<string,set<string> > ctp;


string getBG(char a,char b,char c,char d){
    map<string,string> com={
        {"AA","A"},{"AB","AB"},{"AO","A"},
        {"BA","AB"},{"BB","B"},{"BO","B"},
        {"OA","A"},{"OB","B"},{"OO","O"}
    };
    map<string,string> rh={
        {"++","+"},{"+-","+"},{"-+","+"},{"--","-"}
    };
    return com[string({a,b})]+rh[string({c,d})];
}
string getK(string a,string b){
    return a+" "+b;
}
string getM(string a,string b){
    return a<b?a+" "+b:b+" "+a;
}
void entry(string bg1,string bg2){
    string a=getBG(bg1[0],bg1[1],bg1[2],bg1[3]);
    string b=getBG(bg2[0],bg2[1],bg2[2],bg2[3]);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int r1=2;r1<4;r1++){
                for(int r2=2;r2<4;r2++){
                    string mg=getBG(bg1[i],bg2[j],bg1[r1],bg2[r2]);
                    // cout<<a<<" "<<b<<" "<< mg<<endl;
                    // if(getK(mg,a,mg)=="A+ O+")
                    //     cout<<"Te "<<bg1<<":"<<a<<" "<<bg2<<":"<<b<<" " <<mg<<endl;
                    ctg[getK(a,b)].insert(mg);
                    ctp[getK(b,mg)].insert(a);
                    ctp[getK(a,mg)].insert(b);
    //                 if(getK(mg,b)!=getK(b,mg)){
    //                     cout<<b<<" != "<<mg<< " "<<getK(b,mg) << " "<<getK(mg,b)<<endl;
    // }
                }
            }
        }
    }
}
int main(){
    char letters[]={'A','B','O'};
    char rh[]={'+','-'};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            for(int r1=0;r1<2;r1++){
                for(int r2=r1;r2<2;r2++){
                    // string bg1=getBG(letters[i],letters[j],rh[r1],rh[r2]);
                    // cout<<letters[i]<<letters[j]<<rh[r1]<<rh[r2]<<" " ;
                    for(int ii=0;ii<3;ii++){
                        for(int jj=ii;jj<3;jj++){
                            for(int l1=0;l1<2;l1++){
                                for(int l2=l1;l2<2;l2++){
                                    // string bg2=getBG(letters[ii],letters[jj],rh[l1],rh[l2]);
                                    // cout<<letters[ii]<<letters[jj]<<rh[l1]<<rh[l2]<<endl;
                                    // cout<<bg1<<" "<<bg2<<endl;
                                    entry(string({letters[i],letters[j],rh[r1],rh[r2]}),string({letters[ii],letters[jj],rh[l1],rh[l2]}));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    string p1,p2,ch;
    int cs=1;
    while(cin>>p1>>p2>>ch && p1!="E"){
        cout<<"Case "<<cs++<<": ";
        if(p1=="?"){
            set<string> ans=ctp[getK(p2,ch)];
            // cout<<"? x x "<<getK(ch,p2)<<endl;
            // cout<<"? x x "<<getK(p2,ch)<<endl;
            if(!ans.empty()){
                if(ans.size()>1)
                    cout<<"{";
                cout<<*ans.rbegin();
                for(auto it=next(ans.rbegin());it!=ans.rend();it++){
                    cout<<", "<<*it;
                }
                if(ans.size()>1)
                    cout<<"} ";
                else
                {
                    cout<<" ";
                }
                
            }
            else
            {
                cout<<"IMPOSSIBLE ";
            }
            
            cout<<p2<<" "<<ch<<endl;

        }
        else if(p2=="?"){
            set<string> ans=ctp[getK(p1,ch)];
            cout<<p1<<" ";
            if(!ans.empty()){
                if(ans.size()>1)
                    cout<<"{";
                cout<<*ans.rbegin();
                for(auto it=next(ans.rbegin());it!=ans.rend();it++){
                    cout<<", "<<*it;
                }
                if(ans.size()>1)
                    cout<<"} ";
                else
                {
                    cout<<" ";
                }
                
            }
            else
            {
                cout<<"IMPOSSIBLE ";
            }
            
            cout<<ch<<endl;

        }
        else {
            // cout<<getK(p1,p2)<<endl;
            cout<<p1<<" "<<p2<<" ";
            set<string> ans=ctg[getK(p1,p2)];

            if(ans.size()>1)
                cout<<"{";
            cout<<*ans.rbegin();
            for(auto it=next(ans.rbegin());it!=ans.rend();it++){
                cout<<", "<<*it;
            }
            if(ans.size()>1)
                cout<<"}";
            cout<<endl;
        }
    }
}
