#include <bits/stdc++.h>
using namespace std;

struct detento {
    string S;
    int U;

    bool operator<(const detento& outro) const {
        if (U != outro.U) {
            return U < outro.U;
        }
        return S < outro.S;
    }
};

int main() {
    int N;
    cin >> N;
    priority_queue<detento> fila;

    for (int i = 0; i < N; ++i) {
        detento d;
        cin >> d.S >> d.U;
        fila.push(d);
    }
    while (!fila.empty()) {
        detento atual = fila.top();
        fila.pop();

        cout << atual.S << " " << atual.U << endl;

        int novoU = atual.U / 2;
        if (novoU > 0) {
            fila.push({atual.S, novoU});
        }
    }

    return 0;
}