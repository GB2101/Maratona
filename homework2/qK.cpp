#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	long long r = 0;
	cin >> n;
	vector<int> nums(n, 0);
	
	for (int i = 0; i < n; i++){
		cin >> nums[i];
		r += nums[i];
	}
	
	if (r % 2 == 1){
		cout << "NO" << endl;
	}else {
		sort(nums.begin(), nums.end());
		r = 0;
		int i;
		for (i = 0; i + 1 < n; i++){
			r += nums[i];
		}
		if (r >= nums[i]){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
}
