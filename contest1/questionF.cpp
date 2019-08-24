#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string n;
	cin >> n;
	int l = n.length() - 1;
	int d1 = n[l] - 48;
	int d2 = n[l-1] - 48;
	d1 %= 4;
	d2 %= 2;
	if (d2){
		d1 += 2;
		d1 %= 4;
	}

	int c2 = pow(2, d1);
	c2 %= 5;
	int c3 = pow(3, d1);
	c3 %= 5;
	int c4 = pow(4, d1);
	c4 %= 5;
	int res = (1 + c2 + c3 + c4) % 5;
	cout << res << endl;
}
