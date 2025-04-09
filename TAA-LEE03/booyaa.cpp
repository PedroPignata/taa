#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long F;
    int D;
    cin >> F >> D;

    vector<long long> ultimos30(30);
    long long soma = 0;

    for (int i = 0; i < 30; ++i) {
        cin >> ultimos30[i];
        soma += ultimos30[i];
    }

    int pos = 0;

    for (int i = 0; i < D; ++i) {
        double media_double = static_cast<double>(soma) / 30.0;
        long long media = static_cast<long long>(ceil(media_double));
        F += media;

        soma -= ultimos30[pos];
        ultimos30[pos] = media;
        soma += media;

        pos = (pos + 1) % 30;
    }

    cout << F << endl;
    return 0;
}
