#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout << fixed << setprecision(9);
	
	int n, l;
	cin >> n >> l;
	vector<int> lan(n);
	int p = 0;
	int d = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> lan[i];
	}
	
	sort(lan.begin(), lan.end());
	
	for (int i = 0; i < n; i++) {
		int a = lan[i];
		if ((a - p) > d) {
			d = a - p;
		}
		p = a;
	}
	
	if ((l - p) * 2 > d) {
		d = (l - p) * 2;
	}
	
	if (lan[0] * 2 > d) {
		d = lan[0] * 2;
	}
	
	cout << (float)d/2 << endl;
}
