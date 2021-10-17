#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	ll t;
	cin >> t;

	while (t--) {
		cin >> s;
		map<char, int>m;
		for (auto q : s) {
			++m[q];
		}
		int f = 0;
		int ff = 0;
		for (auto q : m) {
			if ((q.second % 2 == 1) and q.first != s[s.size() / 2]) {
				f = 1;
				break;
			}
		}
		if (f == 1) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}

	return 0;
}