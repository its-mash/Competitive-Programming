#include <bits/stdc++.h>
using namespace std;

struct Card{
    char suit;
    char name;
    int val;
    Card(){

    }
    Card(char suit,char name){
        this->suit=suit;
        this->name=name;
        val=(name<'A')?name-'0':10; 
    }
};
int main(){
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        Card *cards=new Card[52];
        char suit,name;
        for(int i=0;i<52;i++){
            cin>>name>>suit;
            cards[i]=Card(suit,name);
        }
        // for(int i=0;i<52;i++){
        //     cout<<cards[i].name<<cards[i].suit<<" "<<cards[i].val<<endl;
        // }
        int y=0,c=3,ci=27;
        while(c--){
            int x=cards[ci-1].val;
            y+=x;
            ci-=10-x+1;
            // cout<<ci<<" "<<x<< " "<<y <<endl;
        }
        // cout<<ci<<" "<<y<<endl;
        if(y<=ci){
            cout<<"Case "<<cs<<": "<<cards[y-1].name<<cards[y-1].suit<<endl;
        }
        else{
            y=y-ci+27;
            cout<<"Case "<<cs<<": "<<cards[y-1].name<<cards[y-1].suit<<endl;
        }
    }
}