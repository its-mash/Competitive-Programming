#include <bits/stdc++.h>
#define rep(i,a,b) for (int i=(a); i<=(b); i++)
#define lowbit(x) ((x)&(-x))
using namespace std;

const int maxn = 200005;
int T[maxn<<2], a[maxn], n;
vector<int> p[maxn];
long long ans;

void add(int x, int y) {
	for (; x<=n; x+=lowbit(x)) T[x] += y;
	for(int i=1;i<=n;i++)
		cout<<T[i]<<" ";
	cout<<endl;
}

int query(int x, int y) {
	if (x > y) return 0;
	int res = 0;
	for (x--; x; x-=lowbit(x)) res -= T[x];
	for (y; y; y-=lowbit(y)) res += T[y];
	return res;
}

int main() {
		#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	scanf("%d", &n);
	rep (i, 1, n) {
		scanf("%d", &a[i]);
		if (a[i] <= n) p[a[i]].push_back(i);
		add(i, 1);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<"->";
		for(int j=0;j<p[i].size();j++)
			cout<<p[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	rep (i, 1, n-1) {
		ans += query(i+1, min(n, a[i]));
		while (p[i].size()) {
			add(p[i].back(), -1);
			p[i].pop_back();
		}
	}
	cout<<ans<<endl;
	return 0;
}