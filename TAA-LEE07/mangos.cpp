#include <bits/stdc++.h>
using namespace std;

bool canPay(int M, const vector<int>& moedas) {
    vector<bool> v(M + 1, false);
    v[0] = true;
    
    for (int moeda : moedas) {
        for (int j = M; j >= moeda; j--) {
            if (v[j - moeda]) {
                v[j] = true;
            }
        }
    }
    
    return v[M];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M, C;
    cin >> M >> C;
    
    vector<int> moedas(C);
    for (int i = 0; i < C; i++) {
        cin >> moedas[i];
    }
    
    if (canPay(M, moedas)) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }
    
    return 0;
}