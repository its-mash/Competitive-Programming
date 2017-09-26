#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> V(10);

  iota(V.begin(), V.end(), 7);
  copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
