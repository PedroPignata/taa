#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    bool encontrado = false;
    int primeiro, segundo, terceiro;

    for (int i = 0; i < N - 2 && !encontrado; ++i) {
        int left = i + 1;
        int right = N - 1;
        while (left < right) {
            int soma = A[i] + A[left] + A[right];
            if (soma == K) {
                encontrado = true;
                primeiro = A[i];
                segundo = A[left];
                terceiro = A[right];
                break;
            } else if (soma < K) {
                left++;
            } else {
                right--;
            }
        }
    }

    if (encontrado) {
        cout << primeiro << " " << segundo << " " << terceiro << endl;
    } else {
        cout << "Nao existe" << endl;
    }

    return 0;
}