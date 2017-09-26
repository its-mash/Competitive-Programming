#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);

  cout << "The sum of all elements in A is "
       << accumulate(A, A + N, 0)
       << endl;

  cout << "The product of all elements in A is "
       << accumulate(A, A + N, 1,multiplies<int>())
       << endl;
}
