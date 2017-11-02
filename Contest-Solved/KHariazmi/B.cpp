#include <iostream>
using namespace std;

int main(){
    long long dp[30001];
    fill_n(dp,30001,1);
    int coin[4]={5,10,25,50};
    for(int i=0;i<4;i++)
        for(int j=coin[i];j<=30000;j++)
            dp[j]+=dp[j-coin[i]];
    int cent;
    while(cin>>cent){
        if(dp[cent]!=1)
            cout<<"There are "<<dp[cent]<<" ways to produce "<<cent<<" cents change."<<endl;
        else
            cout<<"There is only 1 way to produce "<<cent<<" cents change."<<endl;
    }
}
