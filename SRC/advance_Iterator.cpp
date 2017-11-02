#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> L;
    L.push_back(0);
    L.push_back(1);

    list<int>::iterator i = L.begin();
    advance(i, 2);
    assert(i == L.end());

}
