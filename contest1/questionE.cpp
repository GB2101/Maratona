#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, d;
	int l = 0, r = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> d;
		if (d == 0){
			l = i + 1;
		}else {
			r = i + 1;
		}
	}
	
	cout << fmin(l, r) << endl;
}
