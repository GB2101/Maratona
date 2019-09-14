#include <bits/stdc++.h>

using namespace std;

struct cont{
	int id, st, ma;
	vector<int> won;
	
	cont(int i, int s) {
		this->id = i;
		this->st = s;
		this->ma = s;
	}
	
	void show(){
		cout << id << endl;
		int s = won.size();
		for (int i = 0; i < s; i++){
			cout << won[i];
			if (i + 1 < s){
				cout << " ";
			}
		}
		cout << endl;
	}
};

cont *battle(cont *a, cont *b, int k) {
	cont *resp;
	if (a->st < b->st){
		resp = b;
		resp->won.push_back(a->id);
		resp->st -= a->st;
	}else {
		resp = a;
		resp->won.push_back(b->id);
		resp->st -= b->st;
	}
	resp->st += k;
	if (resp->st > resp->ma){
		resp->st = resp->ma;
	}
	return resp;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	for (t; t > 0; t--){
		int n, k, s;
		cin >> n >> k;
		s = pow(2, n);
		vector<cont*> prev(s, nullptr);
		vector<cont*> next;
		
		int v;
		for (int i = 0; i < s; i++){
			cin >> v;
			prev[i] = new cont(i + 1, v);
		}
		
		for (int i = 0; i < n; i++){
			next.assign(0, nullptr);
			for (int j = 0; j < prev.size(); j += 2){
				cont *winner = battle(prev[j], prev[j+1], k);
				next.push_back(winner);
			}
			prev = next;
		}
		
		prev[0]->show();
	}	
}



















