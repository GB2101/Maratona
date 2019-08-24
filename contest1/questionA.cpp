#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	bool yes = false;
	int l, r, x, y, k;
	cin >> l >> r >> x >> y >> k;
	for (int i = l; i <= r; i++){
		for (int j = x; j <= y; j++){
			if (i/j == k){
				yes = true;
				j = y;
				i = r;
			}
		}
	}
	
	if (yes){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
}
