#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    c=n;
    while(n--){
        int ex[3];
        cin>>ex[0]>>ex[1]>>ex[2];
        sort(ex,ex+3);
        cout<<"Case "<<c-n<<": "<<ex[1]<<endl;
    }
}

