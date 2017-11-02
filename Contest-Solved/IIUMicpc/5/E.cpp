#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    sort(ex,ex+n);
    int index=0;
    for(int i=0;i<n;i++){
        if(ex[i]==0)
        {
            index=i;break;
        }
    }
    int a,b;
    if(index%2==0){
        cout<<1;
        cout<<" "<<ex[0]<<endl;
        cout<<n-3;
        for(int i=2;i<n;i++){
            if(i!=index)
                cout<<" "<<ex[i];
        }
        cout<<endl;
        cout<<2;
        cout<<" "<<ex[index]<<" "<<ex[1]<<endl;
    }
    else{
        cout<<1;
        cout<<" "<<ex[0]<<endl;
        cout<<n-2;
        for(int i=1;i<n;i++){
            if(i!=index)
                cout<<" "<<ex[i];
        }
        cout<<endl;
        cout<<1;
        cout<<" "<<ex[index]<<endl;
    }

}

