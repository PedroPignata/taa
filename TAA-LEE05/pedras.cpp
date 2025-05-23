#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        string P, C;
        cin >> P >> C;
 
        unordered_set<char> catalogo(C.begin(), C.end());
        int negociaveis = 0;
 
        for (char pedra : P) {
            if (catalogo.count(pedra)) {
                negociaveis++;
            }
        }
 
        cout << "Contem " << negociaveis << " pedras negociaveis" << endl;
    }
 
    return 0;
}
