#include <bits/stdc++.h>
using namespace std;

int main() {
  const bitset<12> mask(2730);
  cout << "mask =      " << mask << endl;

  bitset<12> x(8);
  cout<<x.to_ulong()<<endl;
  cout << "Enter a 12-bit bitset in binary: ";
  if (cin >> x) {
    cout << "x =        " << x << endl;
    cout << "As ulong:  " << x.to_ulong() << endl;
    cout << "And with mask: " << (x & mask) << endl;
    cout << "Or with mask:  " << (x | mask) << endl;
  }
}
