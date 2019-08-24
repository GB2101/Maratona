#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	while (k > 0) {
		int aux = n % 10;
		if (aux != 0){
			if (aux < k){
				n -= aux;
				k -= aux;
			}else {
				n -= k;
				k -= k;
			}
		}else {
			n /= 10;
			k--;
		}
	}
	cout << n << endl;
}
