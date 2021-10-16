#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, k, n;
	cin >> t;
	while (t--) {
		ll q;
		cin >> n >> k;
		ll sum = 0;
		while (n--) {
			cin >> q;
			sum += q;
		}
		if (sum <= k) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}

	return 0;

}