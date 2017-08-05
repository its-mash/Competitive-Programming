#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,tm;
    cin>>tm;
    ex=tm;
    reverse(tm.begin(),tm.end());
    ex+=tm;
    cout<<ex<<endl;
}
