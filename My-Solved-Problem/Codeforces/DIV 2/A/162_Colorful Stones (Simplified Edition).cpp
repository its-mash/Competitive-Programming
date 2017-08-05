#include <bits/stdc++.h>
using namespace std;

int main(){
    string f,s;
    cin>>f>>s;
    int i,j;
    for(i=0,j=0;j<s.length();j++)
        if(s[j]==f[i])
            i++;
    cout<<i+1<<endl;
}
