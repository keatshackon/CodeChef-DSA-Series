#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--) {
		string s;
		ll n;
		cin >> n >> s;
		ll cnt = 0;
		for (auto q : s) {
			if (q == '1') {
				cnt++;
			}
		}
		ll ans = (cnt * (cnt + 1) / 2);
		cout << ans << "\n";
	}
	return 0;
}