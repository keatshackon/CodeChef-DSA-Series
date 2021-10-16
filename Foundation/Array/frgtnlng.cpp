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
		vector<string>v;
		map<string, int>m;
		string a;
		while (n--) {
			cin >> a;
			m[a] = -1;
			v.push_back(a);
		}
		int x = 0;
		while (k--) {
			cin >> x;
			string temp = "";
			while (x--) {
				cin >> temp;
				if (m.count(temp) != 0) {
					m[temp] = 1;
				}
			}
		}
		int cnt = 0;

		for (int i = 0; i < v.size(); i++) {

			if (m[v[i]] == 1) {
				cout << "YES ";
			} else {
				cout << "NO ";
			}
		}

		cout << "\n";
	}
	return 0;

}