#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> valores(N), pesos(N);
    for (int i = 0; i < N; i++) cin >> valores[i];
    for (int i = 0; i < N; i++) cin >> pesos[i];
    
    int W;
    cin >> W;
    
    vector<long long> v(W + 1, 0);
    
    for (int i = 0; i < N; i++) {
        for (int j = W; j >= pesos[i]; j--) {
            if (v[j - pesos[i]] + valores[i] > v[j]) {
                v[j] = v[j - pesos[i]] + valores[i];
            }
        }
    }
    
    cout << v[W] << '\n';  
    return 0;
}