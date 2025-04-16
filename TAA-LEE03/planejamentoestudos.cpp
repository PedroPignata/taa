#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calcularSessoes(const vector<int>& exercicios, int x) {
    long long total = 0;
    for (int e : exercicios) {
        total += (e + x - 1) / x;
    }
    return total;
}

int main() {
    int N;
    long long H;
    cin >> N >> H;

    vector<int> exercicios(N);
    int maxEx = 0;

    for (int i = 0; i < N; i++) {
        cin >> exercicios[i];
        maxEx = max(maxEx, exercicios[i]);
    }

    int left = 1, right = maxEx;
    int resposta = maxEx; 

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long sessoes = calcularSessoes(exercicios, mid);

        if (sessoes <= H) {
            resposta = mid;       
            right = mid - 1;      
        } else {
            left = mid + 1;      
        }
    }

    cout << resposta << endl;
    return 0;
}
