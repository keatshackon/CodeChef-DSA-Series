#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int cnt = 0;
		ll q;
		while (n--) {
			cin >> q;
			if ((q + k) % 7 == 0) {
				cnt++;
			}
		}
		cout << cnt << "\n";
		cnt = 0;
	}
	return 0;

}