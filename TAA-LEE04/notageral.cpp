#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A;
    cin >> A;

    int* N = new int[A];
    
    for (int i = 0; i < A; ++i) {
        cin >> N[i];
    }

    sort(N, N + A);

    for (int i = 0; i < A; ++i) {
        cout << N[i] << '\n';
    }

    delete[] N;
    
    return 0;
}