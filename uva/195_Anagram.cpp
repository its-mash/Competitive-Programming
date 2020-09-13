#include <bits/stdc++.h>
using namespace std;

bool cmp(const string a, const string b){
    int l=b.length();
    for(int i=0;i<l;i++){
        if(a[i]!=b[i]){
            if(tolower(a[i])==tolower(b[i])){
                return a[i]<b[i];
            }
            else{
                return tolower(a[i])<tolower(b[i]);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string ex;
        vector<string> lines;
        cin>>ex;
        sort(ex.begin(),ex.end());
        // cout<<ex<<endl;
        lines.push_back(ex);
        while(next_permutation(ex.begin(),ex.end())){
            // cout<<ex<<endl;
            lines.push_back(ex);
        }
        sort(lines.begin(),lines.end(),cmp);
        for(int i=0;i<lines.size();i++){
             cout<<lines[i]<<endl; 
        }
    }
    
}