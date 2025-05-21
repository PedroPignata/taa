#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int P, R;
    cin >> P >> R;
    
    vector<int> cadeiras;
    cadeiras.reserve(P);
    
    for (int i = 0; i < P; ++i) {
        int C;
        cin >> C;

        auto it = lower_bound(cadeiras.begin(), cadeiras.end(), C);
        cadeiras.insert(it, C);

        int vencedor;
        if (R > cadeiras.size()) {
            vencedor = cadeiras.back();
        } else {
            vencedor = cadeiras[R-1];
        }
        
        cout << vencedor << '\n';
    }
    
    return 0;
}