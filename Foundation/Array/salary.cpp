#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios:: sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> v(n);
		int minn = INT_MAX;
		for (auto &q : v) {
			cin >> q;
			if (minn > q) {
				minn = q;
			}
		}
		int ans = 0;
		for (int i = 0; i < v.size(); i++) {
			ans += v[i] - minn;
		}
		cout << ans << "\n";
	}

	return 0;
}