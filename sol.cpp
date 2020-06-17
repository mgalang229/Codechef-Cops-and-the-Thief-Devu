#include <bits/stdc++.h>

using namespace std;

void decode() {
	int a[100], m, x, y;
	cin >> m >> x >> y;
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a,  a + m);
	int ans[110];
	memset(ans, 0, sizeof(ans));
	for (int i = 0; i < m; i++) {
		for (int j = a[i]; j <= (a[i] + (x * y)) && j <= 100; j++) {
			ans[j] = 1;
		}
		for (int k = a[i]; k >= (a[i] - (x * y)) && k >= 1; k--) {
			ans[k] = 1;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= 100; i++) {
		if (ans[i] == 0) {
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
