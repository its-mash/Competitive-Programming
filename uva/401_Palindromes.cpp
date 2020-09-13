#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex;
    map<char,char> mp={
        {'A','A'},
        {'E','3'},
        {'H','H'},
        {'I','I'},
        {'J','L'},
        {'L','J'},
        {'M','M'},
        {'O','O'},
        {'S','2'},
        {'T','T'},
        {'U','U'},
        {'V','V'},
        {'W','W'},
        {'X','X'},
        {'Y','Y'},
        {'Z','5'},
        {'1','1'},
        {'2','S'},
        {'3','E'},
        {'5','Z'},
        {'8','8'}
    };
    while(cin>>ex){
        int l=ex.length(),s=(l+1)/2;
        bool rs=true,ms=true,ov=false;
        for(int i=0;i<s;i++){
            if(ex[i]!=ex[l-1-i])rs=false;
            if(mp[ex[i]]!=ex[l-1-i])ms=false;
        }
        if(rs && ms){
            cout<<ex<<" -- is a mirrored palindrome."<<endl;
        }
        else if(ms){
            cout<<ex<<" -- is a mirrored string."<<endl;
        }
        else if(rs){
            cout<<ex<<" -- is a regular palindrome."<<endl;
        }
        else
        {
            cout<<ex<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
        
    }
}