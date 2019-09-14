#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	long m = 1000000000;
	cin >> n;
	
	vector<long> s;
	
	for (int i = 0; i < n; i++){
		string cmd;
		cin >> cmd;
		if (cmd[1] == 'U'){
			long v;
			cin >> v;
			s.push_back(v);
			m = min(m, v);
		}else if (cmd[1] == 'O'){
			if (s.empty()){
				cout << "EMPTY" << endl;
				m = 1000000000;
			}else {
				long v = s.back();
				s.pop_back();
				if (v == m){
					m = *(min_element(s.begin(), s.end()));
				}
			}
		}else {
			if (s.empty()){
				cout << "EMPTY" << endl;
				m = 1000000000;
			}else {
				cout << m << endl;
			}
		}
	}
}
