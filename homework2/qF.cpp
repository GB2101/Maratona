#include <bits/stdc++.h>

using namespace std;
typedef unordered_map<string, string> dicio;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	dicio dick;
	
	string input;
	cin >> input;
	int a = input.find(" ");
	
	while (a >= 0){
		string sign, word;
		sign = input.substr(0 , a);
		word = input.substr(a + 1);
		dick[word] = sign;
		cin >> input;
		a = input.find(" ");
	}
	
	
}
