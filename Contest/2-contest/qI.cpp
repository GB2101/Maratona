#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> elemts;

bool comp(elemts a, elemts b){
	return (a.first > b.first);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t > 0){
		int n, l, p;
		cin >> n;
		
		vector<elemts> stops(n, make_pair(0, 0));
		
		for (int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			stops[i].first = a;
			stops[i].second = b;
		}
		
		cin >> l >> p;
		
		for (int i = 0; i < n; i++){
			stops[i].first = l - stops[i].first;
		}
		
		sort(stops.begin(), stops.end(), comp);
		
		int res = 0;
		for (int i = n - 1; i > 0; i--){
			if (stops[i-1].first > p){
				if (stops[i].first > p){
					res = -1;
					i = 0;
				}else {
					res++;
					p += stops[i].second;
				}
			}
		}
		
		cout << res << endl;
		
		t--;
	}
}


























