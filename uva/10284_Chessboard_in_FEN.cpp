#include <bits/stdc++.h>
using namespace std;


void lineMark(int i,int j,char board[][8],bool cc[][8]){
    int ii=i-1,jj=j-1;
    while(ii>=0 && board[ii][j]=='0'){
        cc[ii][j]=true;
        ii--;
    }
    ii=i+1;
    while(ii<8 && board[ii][j]=='0'){
        cc[ii][j]=true;
        ii++;
    }

    while(jj>=0 && board[i][jj]=='0'){
        cc[i][jj]=true;
        jj--;
    }
    jj=j+1;
    while(jj<8 && board[i][jj]=='0'){
        cc[i][jj]=true;
        jj++;
    }
}
void crossMark(int i,int j,char board[][8],bool cc[][8]){
  int ii=i-1,jj=j-1;
  while(ii>=0 && jj>=0 && board[ii][jj]=='0'){
      cc[ii][jj]=true;
      ii--;jj--;
  } 
  ii=i+1,jj=j+1;
  while(ii<8 && jj<8 && board[ii][jj]=='0'){
      cc[ii][jj]=true;
      ii++;jj++;
  } 
  ii=i+1,jj=j-1;
  while(ii<8 && jj>=0 && board[ii][jj]=='0'){
      cc[ii][jj]=true;
      ii++;jj--;
  } 
  ii=i-1,jj=j+1;
  while(ii>=0 && jj<8 && board[ii][jj]=='0'){
      cc[ii][jj]=true;
      ii--;jj++;
  } 
}
int main(){
    string line;
    while(getline(cin,line)){
        char board[8][8];
        bool cc[8][8]={};
        int i=0,j=0,k=0,l=line.length();
        while(k<l){
            if(line[k]=='/'){
                i++;
                j=0;
            }
            else if(line[k]<65){
                int t=line[k]-'0';
                while(t--)board[i][j++]='0';
            }
            else
            {
                board[i][j++]=line[k];
                cc[i][j-1]=true;
            }
            k++;
        }


                        // for(int i=0;i<8;i++){
                        //     for(int j=0;j<8;j++)
                        //         cout<<board[i][j];
                        //     cout<<endl;
                        // }
                        // cout<<endl;

                        // for(int i=0;i<8;i++){
                        //     for(int j=0;j<8;j++)
                        //         cout<<cc[i][j];
                        //     cout<<endl;
                        // }
                        // cout<<endl;



        for(int i=0;i<8;i++){
            for(j=0;j<8;j++){
                // cout<<board[i][j];
                char ch=board[i][j];
                if(ch!='0'){
                    // cout<<board[i][j]<<endl;
                    if(ch=='p'){
                       if(i+1<8){
                           if(j-1>=0)
                                cc[i+1][j-1]=true;
                           if(j+1<8)
                                cc[i+1][j+1]=true;
                       }
                    }
                    else if(ch=='P'){
                       if(i-1>=0){
                           if(j-1>=0)
                                cc[i-1][j-1]=true;
                           if(j+1<8)
                                cc[i-1][j+1]=true;
                       }
                    }
                    else if(tolower(ch)=='r'){
                        lineMark(i,j,board,cc);
                    }
                    else if(tolower(ch)=='b'){ crossMark(i,j,board,cc);
                    }
                    else if(tolower(ch)=='q'){
                        lineMark(i,j,board,cc);
                        crossMark(i,j,board,cc);
                    }
                    else if(tolower(ch)=='n'){
                        if(i+2<8){
                            if(j-1>=0)cc[i+2][j-1]=true;
                            if(j+1<8)cc[i+2][j+1]=true;
                        }
                        if(i-2>=0){
                            if(j-1>=0)cc[i-2][j-1]=true;
                            if(j+1<8)cc[i-2][j+1]=true;
                        }
                        if(j+2<8){
                            if(i-1>=0)cc[i-1][j+2]=true;
                            if(i+1<8)cc[i+1][j+2]=true;
                        }
                        if(j-2>=0){
                            if(i-1>=0)cc[i-1][j-2]=true;
                            if(i+1<8)cc[i+1][j-2]=true;
                        }
                    }
                    else{
                        for(int ii=-1;ii<2;ii++){
                            for(int jj=-1;jj<2;jj++){
                                if(ii+i>=0 && ii+i<8 && jj+j>=0 && jj+j<8 )
                                    cc[ii+i][jj+j]=true;
                            }
                        }
                    }
                        // for(int i=0;i<8;i++){
                        //     for(int j=0;j<8;j++)
                        //         cout<<cc[i][j];
                        //     cout<<endl;
                        // }
                        // cout<<endl;
                    
                }
                
            }
            // cout<<endl;
        }
        // cout<<endl;
        int c=0;
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                if(cc[i][j]==false)c++;
        cout<<c<<endl;
    }
}