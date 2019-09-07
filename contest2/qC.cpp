#include <bits/stdc++.h>

using namespace std;

bool order(vector<int> cars, int n) {
	vector<int> st;
	int op = 1;
	bool sp = false;
	for (int i = 0; i < n && !sp; i++){
		if (cars[i] == op){
			op++;
		}else {
			if (!st.empty() && st.back() == op) {
				st.pop_back();
				op++;
			}else if (cars[i] > op || st.back() > op) {
				st.push_back(cars[i]);
			}else {
				sp = true;
			}
		}
	}
	
	return !sp;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while (n != 0){
		vector<int> cars(n, 0);
		for (int i = 0; i < n; i++){
			cin >>cars[i];
		}
		bool t = order(cars, n);
		if (t){
			cout << "yes" << endl;
		}else {
			cout << "no" << endl;
		}
		
		cin >> n;
	}
}
