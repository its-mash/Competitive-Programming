#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
  const int N = sizeof(A) / sizeof(int);
  int B[N];
  int c[N];
  memset(c,0,sizeof c);
  c[0]=1;

  cout << "A[]:         ";
  copy(A, A + N, B);
  copy(B, B + N, ostream_iterator<int>(cout," "));
  cout << endl;

  adjacent_difference(A, A + N, B);
  cout << "Differences: ";
  copy(B, B + N, ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "Reconstruct: ";
  partial_sum(B, B + N, ostream_iterator<int>(cout, " "));
  cout << endl;

cout << "Reconstruct: ";
  partial_sum(c, c + N, ostream_iterator<int>(cout, " "));
  cout << endl;
}

