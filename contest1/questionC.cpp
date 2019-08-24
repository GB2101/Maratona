#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int sub = 0;
	int o = 0, v = 0;
	vector<int> ao(1, 0);
	vector<int> av(1, -1);
	
	for (int i = 0; i < s.length(); i++){
		if (s[i] == 'o'){
			ao[o]++;
		}else {
			ao.push_back(0);
			o++;
			while(s[i] == 'v' && i < s.length())	{
				av[v]++;
				i++;				
			}
			av.push_back(-1);
			v++;
			i--;
		}
	}
	
	for (int i = 0; i <= o; i++){
		cout << ao[i] << " ";
	}
	cout << endl;

	for (int i = 0; i <= v; i++){
		cout << av[i] << " ";
	}
	cout << endl;
	
	
	int au = 0;
	for (int i = 0; i < v; i++){
		if (av[i] > 0){
			for (int j = i + 1; j <= o; j++){
				if (ao[j] > 0){
					for (int k = j; k < v; k++){
						au += av[k];
					}
					sub += av[i] * ao[j] * au;
				}
			}
		}
	}
	
	cout << sub << endl;
}



















