#include <bits/stdc++.h>

using namespace std;

string rm (string n){
	string res = "";
	for (int i = 0; i < n.length(); i++){
		if (n[i] >= 'a' && n[i] <= 'z'){
			res += n[i];
		}else if (n[i] >= 'A' && n[i] <= 'Z') {
			res += n[i] + 32;
		}else if (n[i] == '-'){
			res += n[i];
		}
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n, b = "";	
	cin >> n;
	while (n != "E-N-D"){
		n = rm(n);
		if (n.length() > b.length()){
			b = n;
		}
		cin >> n;
	}
	cout << b << endl;
}
