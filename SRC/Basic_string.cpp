#include <bits/stdc++.h>
using namespace std;

int main() {
  string s(10u, ' ');           // Create a string of ten blanks.

  const char* A = "this is a test";
  s += A;
  cout<<s<<endl;
  cout << "s = " << (s + '\n');
  cout << "As a null-terminated sequence: " << s.c_str() << endl;
  cout << "The sixteenth character is " << s[15] << endl;

  reverse(s.begin(), s.end());
  s.push_back('\n');
  string name="Ashik ";
  name.pop_back();
  name.pop_back();
  cout<<"|"<<name<<"|"<<endl;
  cout << s;
}
