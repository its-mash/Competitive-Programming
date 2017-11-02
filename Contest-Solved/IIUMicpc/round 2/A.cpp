#include <iostream>
using namespace std;

int main(){
    int n,c=0;
    cin>>n;
    while(n!=0){
        c++;
        int x,t=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>0 && x<101)
                t++;
        }
        cout<<"Case "<<c<<": "<<t-(n-t)<<endl;
        cin>>n;
    }
    return 0;
}

