#include <bits/stdc++.h>
using namespace std;
int n;
void o(int f){
    if(f<=n)
        cout<<f;
    else
    {
        cout<<"Blank";
    }
}

int main(){
    while(cin>>n && n!=0){
        int s=ceil(n/4.0);
        cout<<"Printing order for "<<n<<" pages:"<<endl;
        for(int i=0;i<s;i++){
            int fl=s*4-2*i,fr=i*2+1,bl=fr+1,br=fl-1;
            if(fl<=n || fr<=n){
                cout<<"Sheet "<<i+1<<", front: ";o(fl);cout<<", ";o(fr);cout<<endl;
            }
            if(bl<=n || br<=n){
                cout<<"Sheet "<<i+1<<", back : ";o(bl);cout<<", ";o(br);cout<<endl;
            }
        }
    }
}