#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string R, S;
        cin >> R >> S;
        
        unordered_set<char> cartasR(R.begin(), R.end());
        set<char> duplicadas;
        
        for (char c : S) {
            if (cartasR.count(c)) {
                duplicadas.insert(c);
            }
        }
        
        if (duplicadas.empty()) {
            cout << "Baralhos prontos para o duelo\n";
        } else {
            for (char c : duplicadas) {
                cout << c;
            }
            cout << '\n';
        }
    }
    
    return 0;
}