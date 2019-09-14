#include <bits/stdc++.h>

using namespace std;

int main (){
	int c = 998244353;
	int w, h;
	cin >> w >> h;
	w = pow(2, w);
	w %= c;
	h = pow(2, h);
	h %= c;
	int x = (w * h);
	x %= c;
	cout << x << endl;
}
