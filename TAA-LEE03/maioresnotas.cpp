#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, Q;
    cin >> A >> Q;

    vector<int> notas(A);
    for (int i = 0; i < A; i++) {
        cin >> notas[i];
    }

    for (int i = 0; i < Q; i++) {
        int corte;
        cin >> corte;

        auto it = upper_bound(notas.begin(), notas.end(), corte);
        int X = notas.end() - it;

        cout << X << " notas maiores que " << corte << endl;
    }

    return 0;
}
