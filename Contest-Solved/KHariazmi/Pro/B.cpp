#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char ch[]={'a','e','i','o','u'};
    for(int i=1;i<=t;i++){
        string ex;
        cin>>ex;
        int count=0;
        for(int i=0;i<ex.length();i++){
            for(int j=0;j<5;j++)
                if(ch[j]==ex[i])
                    count++;
        }
        cout<<"Case "<<i<<": "<<count<<" "<<ex.length()-count<<endl;
    }
}

