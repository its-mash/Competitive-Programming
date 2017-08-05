#include <bits/stdc++.h>
using namespace std;

int main(){
    int l;
    cin>>l;
    string ex, pokemon[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon","sylveon"};
    cin>>ex;
    for(int i=0;i<8;i++){
        int j;
        for(j=0;j<l;j++){
            if(ex[j]!='.' && pokemon[i][j]!=ex[j])
                break;
        }
        if(j==l && pokemon[i].length()==l){
            cout<<pokemon[i]<<endl;return 0;
        }
    }
}
