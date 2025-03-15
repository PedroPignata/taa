#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (cin.fail()) {
        cout << "Entrada inválida. Por favor, insira um número inteiro." << endl;
        return 1;
    }

    if (N < 1 || N > 1000000) {
        cout << "O valor de N deve estar entre 1 e 1.000.000." << endl;
        return 1;
    }

    vector<long long> sequencia;

    while (N != 1) {
        sequencia.push_back(N);

        if (N % 2 == 0) {
            N /= 2;
        } else {
            N = 3 * N + 1;
        }
    }

    sequencia.push_back(1);

    for (size_t i = 0; i < sequencia.size(); ++i) {
        cout << sequencia[i];
        if (i < sequencia.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}

