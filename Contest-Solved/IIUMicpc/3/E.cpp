#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string ex,token,ans="Zrog";
        getline(cin,ex);
        istringstream iss(ex);
        bool m=false,middle=false,oper=false;
        int c=0,t=0;
        while (getline(iss, token, ' '))
        {
            bool tt=false;
            if(token=="=" || token==">" || token=="<" || token=="<=" || token==">="){
                middle=true;t--;m=true;c++;
            }
            else if(token=="+" || token=="-" || token=="*" || token=="/" || token=="%" ){
                oper=true;t--;
            }
            else{
                t++;
                for(int i=0;i<token.length();i++){
                    if(!isdigit(token[i]) && !isalpha(token[i])){
                        ans="Frog";
                        tt=true;break;
                    }
                }

            }
            //cout<<t<<endl;
            if(tt){
                break;
            }
            if(t<0 || t>1 ){
                ans="Frog";break;
            }


        }
       // cout<<m<<c<<t<<endl;
        if(t!=1 || m!=1 || c!=1)
        {
            ans="Frog";
        }
        cout<<ans<<endl;
    }
}



