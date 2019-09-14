#include <bits/stdc++.h>

using namespace std;

bool comp(int i, int j){
	return (i > j);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while (n){
		vector<int> nums(n, 0);
		for (int i = 0; i < n; i++){
			cin >> nums[i];
		}
		sort(nums.begin(), nums.end(), comp);
		int sum = 0, res = 0;
		
		for (int i = n - 1; i > 0 ; i--){
			sum = nums[i] + nums[i-1];
			res += sum;
			nums.pop_back();
			nums.pop_back();
			nums.push_back(sum);
			for (int j = i - 1; j > 0; j--){
				if (nums[j] > nums[j-1]){
					sum = nums[j];
					nums[j] = nums[j-1];
					nums[j-1] = sum;
				}else {
					j = 0;
				}
			}
		}
		
		cout << res << endl;
		cin >> n;
	}
}
