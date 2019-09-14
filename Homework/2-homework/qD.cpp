#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (cin >> n){
        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> heap;
        int stat = 3;
        string name[3] = {"stack", "queue", "priority queue"};
        bool str[3] = {true, true, true};

        for (int i = 0; i < n; i++){
            int cmd, num;
            cin >> cmd >> num;
            if (cmd == 1){
                pilha.push(num);
                fila.push(num);
                heap.push(num);
            }else {
                if (str[0]) {
                    if (!pilha.empty()) {
                        if (num != pilha.top()) {
                            str[0] = false;
                            stat--;
                        }
                        pilha.pop();
                    } else {
                        str[0] = false;
                        stat--;
                    }
                }
                if (str[1]) {
                    if (!fila.empty()) {
                        if (num != fila.front()) {
                            str[1] = false;
                            stat--;
                        }
                        fila.pop();
                    } else {
                        str[1] = false;
                        stat--;
                    }
                }
                if (str[2]) {
                    if (!heap.empty()) {
                        if (num != heap.top()) {
                            str[2] = false;
                            stat--;
                        }
                        heap.pop();
                    } else {
                        str[2] = false;
                        stat--;
                    }
                }
            }
        }

        if (stat == 0){
            cout << "impossible" << endl;
        }else if (stat == 1){
            for (int i = 0; i < 3; i++){
                if (str[i]){
                    cout << name[i] << endl;
                    i = 3;
                }
            }
        }else {
            cout << "not sure" << endl;
        }
    }

    return 0;
}
