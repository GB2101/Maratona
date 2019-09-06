#include <bits/stdc++.h>

using namespace std;

int cross(queue<int> left, queue<int> right, int l) {
	int res = 0, a;
	while (!left.empty() || !right.empty()){
		a = 0;
		while (a + left.front() <= l && !left.empty()){
			a += left.front();
			left.pop();
		}
		res++;
		a = 0;
		while (a + right.front() <= l && !right.empty()){
			a += right.front();
			right.pop();
		}
		if (!left.empty() || !right.empty() || a > 0){
		    res++;
		}
	}
	
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int c;
	cin >> c;
	
	while (c > 0){
		c--;
		int l, m;
		cin >> l >> m;
		l *= 100;
		
		queue<int> left;
		queue<int> right;
		
		string s;		
		int len;
		for (int i = 0; i < m; i++){
			cin >> len >> s;
			if (s[0] == 'l'){
				left.push(len);
			}else {
				right.push(len);
			}
		}
		
		int res = cross(left, right, l);
		cout << res << endl;
	}
}
