#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	vector<int> array(n, 0);
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	sort(array.begin(), array.end());
	for (int i = 0; i < n; i++){
		cout << array[i];
		if (i + 1 < n){
			cout << " ";
		}
	}
	cout << endl;
}
