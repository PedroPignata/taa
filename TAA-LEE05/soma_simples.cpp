#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    unordered_set<int> elementos;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        elementos.insert(A[i]);
    }

    bool encontrado = false;
    int primeiro, segundo;

    for (int i = 0; i < N; ++i) {
        int complemento = K - A[i];
        if (elementos.count(complemento)) {
            
            if (complemento != A[i] || count(A.begin(), A.end(), complemento) > 1) {
                encontrado = true;
                primeiro = A[i];
                segundo = complemento;
                break;
            }
        }
    }

    if (encontrado) {
        cout << primeiro << " " << segundo << endl;
    } else {
        cout << "Nao existe" << endl;
    }

    return 0;
}