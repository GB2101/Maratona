#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> line(n, 0);
	
	for (int i = 0; i < n; i++){
		cin >> line[i];
	}
	
	int d = n, r = 0;
	
	while (n > 0){
		n--;
		if (n < d){
			r++;
		}
		int a = n - line[n];
		d = min(d, a);
	}
	
	cout << r << endl;
}
