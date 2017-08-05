#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string ex;
    while(getline(cin,ex)){
        string tkn;
        bool b=false;
        stack<long long> doll,sum;
        sum.push(10000001);
        istringstream is(ex);
        if(ex[0]!='-'){
            cout<<":-( Try again."<<endl;continue;
        }
        while(getline(is,tkn,' ')){

            long long tmp=stoi(tkn);
            if(tmp<0){
                doll.push(tmp);
                sum.push(0);
            }
            else if(tmp*-1==doll.top()){
                //cout<<"checking :"<<endl<<tmp<<" "<<sum.top()<<endl;
                if(tmp<=sum.top()){
                    cout<<":-( Try again."<<endl;b=true;break;
                }
                doll.pop();sum.pop();
                sum.top()+=tmp;
            }
            else{
                sum.top()+=tmp;
            }
           /* cout<<"doll contains: "<<endl;
            stack<long long> tm1,tm2;
            tm1=doll;tm2=sum;
            while(!tm1.empty()){
                cout<<tm1.top()<<" ";tm1.pop();
            }
            cout<<endl<<"Sum contains"<<endl;
            while(!tm2.empty()){
                cout<<tm2.top()<<" ";tm2.pop();
            }
            cout<<endl;*/
        }
       // cout<<doll.size()<<" "<<sum.size()<<" "<<b<<endl;
        if(b)
            continue;
        if(!doll.empty())
            cout<<":-( Try again."<<endl;
        else
            cout<<":-) Matrioshka!"<<endl;
    }
}
