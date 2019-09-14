#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
	bool res = false;
	int s = min(a.length(), b.length());
	int f = 0;
	for (int i = 0; i < s; i++){
		if (a[i] < b[i]){
			res = true;
			i = s;
			f = 1;
		}else if (a[i] > b[i]){
			res = false;
			i = s;
			f = 1;
		}
	}
	if (f == 0){
		res = (a.length() > b.length());
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<string> s(n, "");
	
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	
	sort(s.begin(), s.end(), comp);
	
	for (int i = 0; i < n; i++){
		cout << s[i];
	}
	cout << endl;
}
