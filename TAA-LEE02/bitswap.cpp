#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        unsigned long long N, P, Q;
        cin >> N >> P >> Q;

        unsigned long long bitP = (N >> P) & 1;
        unsigned long long bitQ = (N >> Q) & 1;

        if (bitP != bitQ) {

            unsigned long long maskP = 1ULL << P;
            unsigned long long maskQ = 1ULL << Q;

            N ^= maskP;
            N ^= maskQ;
        }

        cout << N << '\n';
    }

    return 0;
}