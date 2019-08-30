#include <bits/stdc++.h>

using namespace std;

struct person {
	string n;
	int d, m, y;
	
	person(string n, int d, int m, int y) {
		this->n = n;
		this->d = d;
		this->m = m;
		this->y = y;
	}
	
	person *more (person * that){
		person *res = that;
		if (this->y < that->y){
			res = this;
		}else if (this->y == that->y){
			if (this->m < that->m){
				res = this;
			}else if (this->m == that->m){
				if (this->d < that->d){
					res = this;
				}
			}
		}
		return res;
	}
	
	person *less (person * that){
		person *res = that;
		if (this->y > that->y){
			res = this;
		}else if (this->y == that->y){
			if (this->m > that->m){
				res = this;
			}else if (this->m == that->m){
				if (this->d > that->d){
					res = this;
				}
			}
		}
		return res;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a;
	cin >> a;
	string n;
	int d, m, y;
	cin >> n >> d >> m >> y;
	person *b = new person(n, d, m, y);
	person *c = new person(n, d, m, y);
	
	for (int i = 1; i < a; i++){
		cin >> n >> d >> m >> y;
		person *temp = new person(n, d, m, y);
		b = b->less(temp);
		c = c->more(temp);
	}
	
	cout << b->n << endl << c->n << endl;
}





































