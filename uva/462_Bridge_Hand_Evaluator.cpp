#include <bits/stdc++.h>
using namespace std;

struct Card{
    char suitName;
    bool A,K,Q,J;
    int count;
    static int points;
    static int exPoints;
    bool isStopped(){
        return A || (K && count>1) || (Q && count>2);
    }
    Card(){
        A=K=Q=J=false;
        count=0;
    }
};
int Card::points=0;
int Card::exPoints=0;

int main(){
    string line;
    while(getline(cin,line)){
        istringstream in(line);

        Card cards[4];
        cards[0].suitName='S';
        cards[1].suitName='H';
        cards[2].suitName='D';
        cards[3].suitName='C';

        // for(int i=0;i<4;i++){
        //     cout<<cards[i].A<<" "<<cards[i].K<<" "<<cards[i].Q<<" "<<cards[i].J<<" "<<cards[i].count<<endl;
        // }

        char cardName,suitName;      
        for(int i=0;i<13;i++){
            in>>cardName>>suitName;
            int index=(suitName=='S')?0:((suitName=='H')?1:((suitName=='D')?2:3));
            if(cardName=='A'){
                cards[index].A=true;
                Card::points+=4;
            }
            else if(cardName=='K'){
                cards[index].K=true;
                Card::points+=3;
            }
            else if(cardName=='Q'){
                cards[index].Q=true;
                Card::points+=2;
            }
            else if(cardName=='J'){
                cards[index].J=true;
                Card::points+=1;
            }
            cards[index].count++;
        }   
        // cout<<Card::points<<endl;
        for(int i=0;i<4;i++){
            if(cards[i].K && cards[i].count==1)
                Card::points--;
            if(cards[i].Q && cards[i].count<3)
                Card::points--;
            if(cards[i].J && cards[i].count<4)
                Card::points--;
        }
        // cout<<Card::points<<endl;
        Card::exPoints=Card::points;
        for(int i=0;i<4;i++){
            if(cards[i].count==2)
                Card::points++;
            else if(cards[i].count<2)
                Card::points+=2;
        }
        // cout<<Card::points<<" "<<Card::exPoints<<endl;
        if(Card::exPoints>15 && cards[0].isStopped() && cards[1].isStopped() && cards[2].isStopped() && cards[3].isStopped()){
            cout<<"BID NO-TRUMP"<<endl;
        }
        else if(Card::points>13){
            char suitName;
            int maxP=-1;
            for(int i=0;i<4;i++){
                if(cards[i].count>maxP){
                    suitName=cards[i].suitName;
                    maxP=cards[i].count;
                }
            }
            cout<<"BID "<<suitName<<endl;
        }
        else
        {
            cout<<"PASS"<<endl;
        }
        Card::points=0;
        Card::exPoints=0;
    }
}