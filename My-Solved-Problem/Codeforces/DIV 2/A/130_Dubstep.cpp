#include <bits/stdc++.h>
using namespace std;

int main() {
   string ex;
   cin>>ex;
   regex pattern("WUB");
   ex=regex_replace(ex, pattern, " ");

   if(ex[0]==' ')
        ex=ex.substr(1);
   if(ex[ex.length()-1]==' ')
        ex=ex.substr(0,ex.length()-1);

   cout<<ex<<endl;
}
