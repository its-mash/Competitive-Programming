#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex;
    cin>>ex;
    if(ex[0]!='-')
        ex='+'+ex;
    ex+='+';
    cout<<ex<<endl;

    vector<string> co;
    for( int i=1,b=0;i<ex.length();i++){
        if(ex[i]=='+' || ex[i]=='-'){
            co.push_back(ex.substr(b,i-b));
            b=i;
        }
    }
    int maxd=0,mind=101;
    string maxstr,minstr;
    int ans1=0,ans2=0,ans3=0;
    for(vector<string>::iterator it=co.begin();it!=co.end();it++){
        string token=*it;
        int degree;
        int id=token.length()-2;
        if(token[id]=='^'){
            degree=token[id+1]-'0';
            maxd=max(maxd,token[id+1]-'0');
            if(maxd<token[id+1]-'0'){
                maxd=token[id+1]-'0';maxstr=token;
            }
            if(mind>token[id+1]-'0'){
                mind=token[id+1]-'0';minstr=token;
            }
        }
        else{
            degree=0;
            mind=0;minstr=token;
        }
        int cof=(token.find('x')!=string::npos)? stoi(token.substr(0,token.find_first_of('x'))):stoi(token);
        cout<<cof<< " HH "<<degree<<endl;
        ans1+=cof*pow(-1,degree);
        ans2+=cof*pow(0,degree);
        ans3+=cof*pow(1,degree);
    }
    cout<<co.size()<<" "<<maxstr<<" "<<minstr<<" "<<ans1<<" "<<ans2<<" "<<ans3<<endl;
}
