#include <bits/stdc++.h>
using namespace std;

int main(){

    string ex;
    cin>>ex;
    vector<int> srt;
    for(int i=0;i<ex.length();i+=2){
        srt.push_back(ex[i]-'0');
    }
    sort(srt.begin(),srt.end());
    //cout<<*srt.begin();
    cout<<srt[0];
    //for(auto it=srt.begin()+1;it!=srt.end();it++)
//       cout<<"+"<<*it;

      for(int i=1;i<srt.size();i++)
        cout<<"+"<<srt[i];
      cout<<endl;
        return 0;
}

