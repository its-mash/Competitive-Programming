#include <iostream>
using namespace std;
//stdLn

int main(){
    int n,sx=1;
    cin>>n;
    long long ex=1;
    string ans="Yes";
    while(n--){
        int t;
        cin>>t;
        sx*=t;
        ex*=t;
        if(ex!=sx)
            ans="No";
    }
    cout<<ans<<endl;
}
