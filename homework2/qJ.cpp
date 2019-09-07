#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	while (n !=0 || m != 0){
		vector<int> jack(n, 0);
		vector<int> jill(m, 0);
		
		for (int i = 0; i < n; i++){
			cin >> jack[i];
		}
		for (int i = 0; i < m; i++){
			cin >> jill[i];
		}
		
		int i = 0, j = 0;
		int r = 0;
		while (i < n && j < m){
			if (jack[i] == jill[j]){
				r++;
				i++;
				j++;
			}else {
				if (jack[i] < jill[j]){
					i++;
				}else {
					j++;
				}
			}
		}
		
		cout << r << endl;
		cin >> n >> m;
	}
}
