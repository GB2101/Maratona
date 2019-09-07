#include <bits/stdc++.h>

using namespace std;

int sub (string f){
	int p = 0, r = -1;
	for (int i = 0; i < f.length(); i++){
		if (f[i] == '('){
			p++;
		}else if (f[i] == ')'){
			p--;
		}else if (p == 0 && ((f[i] > 41 && f[i] < 48) || f[i] == 94)){
			r = i;
			i = f.length();
		}
	}
	return r;
}

string rpn(string f) {
	string res = "";
	if (f.length() == 1){
		return f;
	}else {
		f.erase(0, 1);
		f.pop_back();
		int a = sub(f);
		res += rpn(f.substr(0, a));
		res += rpn(f.substr(a + 1));
		res += f[a];
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		string f;
		cin >> f;
		cout << rpn(f) << endl;
	}
}
