#include <bits/stdc++.h>
using namespace std;

class PeacefulLine{
    public:
	string makeLine(vector <int> x){
        int m=-1,ex[26]={};
        for(int i=0;i<x.size();i++){
            ex[x[i]]++;
        }
        for(int i=0;i<26;i++){
            if(ex[i]>m)
                m=ex[i];
        }
        int r= x.size()-m*2 ;
        if(r >= -1)
            return "possible";
        else
            return "impossible";
        
    }
};

    int main(){

        vector <int> x = {
            1,2,3,4
        };

        PeacefulLine t;
       cout<< t.makeLine(x)<<endl;
    }
