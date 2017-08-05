#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<-1<<endl;return 0;
    }

    for(int i=2;i < n;i+=2)
        cout<<i<<" "<<i-1<<" ";
    cout<<n<<" "<<n-1<<endl;
}
