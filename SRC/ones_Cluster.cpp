#include <bits/stdc++.h>
using namespace std;

const int ROW=6;
const int COL=6;
const int offSet[]={-1,0,1};

bool neighborExist(int ex[][COL],int i,int j){
    if(i>=0 && i<ROW && j>=0 && j<COL)
        if(ex[i][j]==1)
            return true;
    return false;
}
void doDFS(int ex[][COL],int i,int j,bool visited[][COL]){
    if(visited[i][j])
        return;
    visited[i][j]=true;
    //cout<<i<<" dfs "<<j<<endl;
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            if(x==1 && y==1)
                continue;
            //cout<<"OD ss "<<offSet[x]<<" "<<offSet[y]<<endl;
            if(neighborExist(ex,i+offSet[x],j+offSet[y]))
                doDFS(ex,i+offSet[x],j+offSet[y],visited);
        }
    }
}

int numberOfCluster(int ex[][COL]){
    int count=0;
    bool visited[6][6]={};
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            if(ex[i][j]==1 && !visited[i][j]){
                count++;
                doDFS(ex,i,j,visited);
            }

        }
    }
    return count;
}

int main(){
    int ex[][COL]={
                1,0,0,0,1,0,
                0,1,1,0,0,1,
                1,0,0,0,0,1,
                0,1,0,1,0,1,
                0,0,0,1,0,0,
                1,0,0,0,1,0
               };

    cout<<numberOfCluster(ex)<<endl;

}
