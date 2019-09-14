#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int p = -1;
	int stop = 0;
	
	while (!stop){
		for (int i = 0; i + 1 < s.length(); i++){
			if (s[i] == s[i+1] && i >= 0){
				s.erase(i, 2);
				p *= -1;
				i -= 2;
				stop++;
			}
		}
		if (stop){
			stop = -1;
		}
		stop++;
	}
	
	if (p > 0) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
}
