#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
int c[20];
int main(){
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(c,c + n);
    int ans = 0;
    for (int i = 0; i < pow(2,n); i++)
    {
        int temp = 0,m = 99999999,M = -1;
        for (int j = 0; j < n; j++)
        {

            //cout<<i<<"  "<<j<<" " <<(1<<j)<<endl;
            if (i & 1 << j)
            {
               // cout<<" c[j] "<<c[j]<<endl;

                temp += c[j];
                m = min(m,c[j]);
                M = max(M,c[j]);
            }
        }
      //  cout<<endl;
        if (temp >= l && temp <= r && (M - m) >= x){
            ans++;
           // cout<<"sum "<<temp<<endl;
        }
    }
    cout << ans << endl;
    return 0;
}
