#include <bits/stdc++.h>
using namespace std;

int l,x,y,z,x_,y_,z_;

void solve(string st){
   if(st=="+y"){
       int cx=x;
       x=-y+l;
       y=cx-l;

       cx=x_;
       x_=-y_+l;
       y_=cx-l;
   }
   else if(st=="-y"){ 
       int cx=x;
       x=y+l;
       y=-cx+l;

       cx=x_;
       x_=y_+l;
       y_=-cx+l;
   } 
   else if(st=="+z"){ 
       int cx=x;
       x=-z+l;
       z=cx-l;

       cx=x_;
       x_=-z_+l;
       z_=cx-l;
   } 
   else if(st=="-z"){ 
       int cx=x;
       x=z+l;
       z=-cx+l;

       cx=x_;
       x_=z_+l;
       z_=-cx+l;
   } 
}

void dir(){
    if(x==x_ && y==y_){
        cout<<((z>z_)?"+z":"-z")<<endl;
    }
    else if(x==x_ && z==z_){
        cout<<((y>y_)?"+y":"-y")<<endl;
    }
    else if(y==y_ && z==z_){
        cout<<((x>x_)?"+x":"-x")<<endl;
    }
}
int main(){
    while(cin>>l && l!=0){
        x=l;x_=l-1;y=y_=0;z=z_=0;

        string st;
        while(--l){
            cin>>st;
            solve(st);
            // cout<<x<<","<<y<<","<<z<<" -- "<<x_<<" "<<y_<< " "<<z_<<endl;
           
        }
        dir();
    }
}