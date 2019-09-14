#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, p = 1;
	cin >> n;
	vector<int> nums;

	for (int i = 0; i < n; i++){
		string cmd;
		cin >> cmd;
		if (cmd[0] == 'b'){
			if (!nums.empty()){
				if (p == 1){
					cout << nums.back() << endl;
					nums.pop_back();
				}else {
					cout << nums.front() << endl;
					nums.erase(nums.begin(), nums.begin() + 1);
				}
			}else {
				cout << "No job for Ada?" << endl;
			}
		}else if (cmd[0] == 'f'){
			if (!nums.empty()){
				if (p == 1){
					cout << nums.front() << endl;
					nums.erase(nums.begin(), nums.begin() + 1);
				}else {
					cout << nums.back() << endl;
					nums.pop_back();
				}
			}else {
				cout << "No job for Ada?" << endl;
			}
		}else if (cmd[0] == 'r'){
			p *= -1;
		}else if (cmd[0] == 'p'){
			int el;
			cin >> el;
			if (p == 1){
				nums.push_back(el);
			}else {
				nums.insert(nums.begin(), el);
			}
		}else if (cmd[0] == 't'){
			int el;
			cin >> el;
			if (p == 1){
				nums.insert(nums.begin(), el);
			}else {
				nums.push_back(el);
			}
		}
	}
}
