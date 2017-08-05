#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b){
        for(int i=a;i<=b;i++){
        if(i%c==0 && i%d==0)
            cout<<"FizzBuzz"<<endl;
        else if(i%c==0)
            cout<<"Fizz"<<endl;
        else if(i%d==0)
            cout<<"Buzz"<<endl;
        else
            cout<<i<<endl;
        }
    }
    else{
        for(int i=a;i>=b;i--){
            if(i%c==0 && i%d==0)
                cout<<"FizzBuzz"<<endl;
            else if(i%c==0)
                cout<<"Fizz"<<endl;
            else if(i%d==0)
                cout<<"Buzz"<<endl;
            else
                cout<<i<<endl;

        }

    }

    return 0;
}


