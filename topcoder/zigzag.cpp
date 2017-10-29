#include <bits/stdc++.h>

using namespace std;
class ZigZag{
	public:
    int longestZigZag(vector <int> sequence){
        int sz=sequence.size();
        //cout<<sz<<endl;
		vector<char> track(sz,'n');
        int res[sz];

        fill_n(res,sz,1);
        //cout<<res[5]<<endl;
        for(int i=1;i<sz;i++){
            for(int j=0;j<i;j++){
            	if(res[j]+1>res[i]){
                	if(track[j]=='+' && sequence[i]<sequence[j]){
                    	res[i]=res[j]+1;
                        track[i]='-';
                        //cout<<sequence[j]<<"->"<<sequence[i]<<" -> "<<track[j]<<" -> "<<track[i]<<" = "<<res[i]<<endl;
                    }
                    else if(track[j]=='-' && sequence[i]>sequence[j]){
                    	res[i]=res[j]+1;
                        track[i]='+';
                        //cout<<sequence[j]<<"->"<<sequence[i]<<" -> "<<track[j]<<" -> "<<track[i]<<" = "<<res[i]<<endl;
                    }
                    else if(track[j]=='n' && sequence[i]!=sequence[j]){
                    	res[i]=res[j]+1;
                        track[i]=((sequence[i]>sequence[j]) ? '+':'-');
                        //cout<<sequence[j]<<"->"<<sequence[i]<<" -> "<<track[j]<<" -> "<<track[i]<<" = "<<res[i]<<endl;
                    }
                }
                
            }
            //cout<<endl;
        }
        return res[sz-1];
    }
};

int main(){
    ZigZag z;
    cout<<z.longestZigZag({  1, 17, 5, 10, 13, 15, 10, 5, 16, 8 })<<endl;

}