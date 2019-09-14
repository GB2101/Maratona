#include <bits/stdc++.h>

using namespace std;

bool comp(long a, long b){
	return (a > b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	long long s = 0;
	cin >> n;
	vector<long> p(n, 0);
	
	for (int i = 0; i < n; i++){
		cin >> p[i];
		s += p[i];
	}
	
	sort(p.begin(), p.end(), comp);
	
	cin >> m;

	int c;
	long long a;
	for (int i = 0; i < m; i++){
		cin >> c;
		c--;
		a = (long long)s - p[c];
		cout << a << endl;
	}
}
