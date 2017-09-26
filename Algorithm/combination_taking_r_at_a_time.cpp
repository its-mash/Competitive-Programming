#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;
int main() {
   int n, r;
   std::cin >> n;
   std::cin >> r;
   string ex="abcd";
   std::vector<bool> v(n);
   std::fill(v.begin(), v.begin() + r, true);

   do {
       for (int i = 0; i < n; ++i) {
           if (v[i]) {
                cout<<ex[i];
               //std::cout << (i + 1) << " ";
           }
       }
       cout<<endl;
       std::cout << "\n";
   } while (std::prev_permutation(v.begin(), v.end()));
   return 0;
}
