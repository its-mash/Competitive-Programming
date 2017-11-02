#include <bits/stdc++.h>
using namespace std;

int main() {
  int A[] = { 2, 0, 2, 6, 0, 3, 1, -7 };
  const int N = sizeof(A) / sizeof(int);

  cout << "Number of zeros: "
       << count(A, A + N, 2)
       << endl;
}
