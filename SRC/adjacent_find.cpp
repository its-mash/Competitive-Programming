#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {1, 2, 3, 4, 6, 5, 7, 8};
const int N = sizeof(A) / sizeof(int);

const int* p = adjacent_find(A, A + N, greater<int>());

cout << "Element " << p - A << " is out of order: "
     << *p << " > " << *(p + 1) << "." << endl;
}
