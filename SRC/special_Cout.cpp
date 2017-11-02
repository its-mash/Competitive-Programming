#include <bits/stdc++.h>
using  namespace std;

int main(){
    int A[] = {1, 4, 2, 8, 5, 7};
    const int N = sizeof(A) / sizeof(int);
    sort(A, A + N);
    string ex[]={"sa","fes","fef"};
    copy(ex,ex+3,ostream_iterator<string>(cout," "));
    //copy(ex, ex + 3, ostream_iterator<string>(cout, " "));
}
