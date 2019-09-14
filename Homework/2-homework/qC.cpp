#include <bits/stdc++.h>

using namespace std;
typedef vector<int> arr;

string order(arr cars, int n) {
	int a = 1, i = 0;
	arr side(1, 0);
	
	while (a <= n){ 
		if (cars[i] == a){
			a++;
		}else {
			if (side.back() == a){
				side.pop_back();
				a++;
				i--;
			}else {
				if (cars[i] != side.back()){
					side.push_back(cars[i]);
				}else {
					a = n + 1;
				}
			}
		}
		if (i + 1 < n){
			i++;
		}
	}
	side.pop_back();
	
	if (side.empty()){
		return "yes";
	}else {
		return "no";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while (n){
		arr cars(n, 0);
		for (int i = 0; i < n; i++){
			cin >> cars[i];
		}
		
		cout << order(cars, n) << endl;
		cin >> n;
	}
}
