#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, k, a, b, c;
	cin >> t;
	while (t--) {
		cin >> n >> k >> a >> b;
		ll x, y;
		int f = 0;
		int temp = n - k;
		while (b--) {
			cin >> x >> y;
			if (x >= temp and y <= a) {
				f = 1;
			}
		}
		if (f == 1) {
			cout << "LuckyChef\n";
		} else {
			cout << "UnluckyChef\n";
		}
	}
	return 0;

}