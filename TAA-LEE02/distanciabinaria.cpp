#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        unsigned long long X, Y;
        cin >> X >> Y;

        unsigned long long diff = X ^ Y;
        int distance = 0;

        while (diff > 0) {
            distance += diff & 1;
            diff >>= 1;
        }

        cout << distance << '\n';
    }

    return 0;
}