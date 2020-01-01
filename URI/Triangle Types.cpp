#include <bits/stdc++.h>
using namespace std;

int main () {
  double ex[3];
  cin>>ex[0]>>ex[1]>>ex[2];

  sort (ex, ex+3, greater<double>());

  if( ex[0] >= ex[1] + ex[2])
      cout<<"NAO FORMA TRIANGULO"<<endl;
  if (ex[0]*ex[0] == ex[1]*ex[1] + ex[2]*ex[2])
      cout<<"TRIANGULO RETANGULO"<<endl;
  if (ex[0]*ex[0] > (ex[1]*ex[1] + ex[2]*ex[2]))
      cout<<"TRIANGULO OBTUSANGULO"<<endl;
  if (ex[0]*ex[0] < (ex[1]*ex[1] + ex[2]*ex[2]))
      cout<<"TRIANGULO ACUTANGULO"<<endl;
  if (ex[0] == ex[2])
      cout<<"TRIANGULO EQUILATERO"<<endl;
  if ((ex[0]==ex[1] && ex[0]!=ex[2]) || (ex[1]==ex[2] && ex[1]!=ex[0]))
      cout<<"TRIANGULO ISOSCELES"<<endl;

  return 0;
}
