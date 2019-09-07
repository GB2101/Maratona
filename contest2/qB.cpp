#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> ga(5, 0);
	vector<int> gb(5, 0);
	
	for (int i = 0; i < n; i++){
		int m;
		cin >> m;
		m--;
		ga[m]++;
	}
	
	for (int i = 0; i < n; i++){
		int m;
		cin >> m;
		m--;
		gb[m]++;
	}
	
	bool p = true;
	int rs = 0;
	
	for (int i = 0; i < 5 && p; i++){
		int a = ga[i] + gb[i];
		if (a % 2 == 0){
			a /= 2;
			int b = ga[i] - a;
			if (b > 0) {
				rs += b;
			}
		}else {
			p = false;
			rs = -1;
		}
	}
	
	cout << rs << endl;
}
