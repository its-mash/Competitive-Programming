#include <bits/stdc++.h>

using namespace std;
/*
  0=0,8
  1=0,1,3,4,7,8,9
  2=2,8
  3=3,8,9
  4=4,8,9
  5=5,6,8,9
  6=6,8
  7=0,3,7,8,9
  8=8
  9=9,8
*/
int main(){
    int ex[]={2,7,2,3,3,4,2,5,1,2};
    int n;
    cin>>n;
    cout<<(ex[n/10]*ex[n%10])<<endl;
}
