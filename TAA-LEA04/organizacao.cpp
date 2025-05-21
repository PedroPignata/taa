#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int P, S;
    cin >> P >> S;
    cin.ignore();

    unordered_map<string, vector<string>> escolhas;

    for (int i = 0; i < P; ++i) {
        string S, D1, D2, D3;
        cin >> S >> D1 >> D2 >> D3;
        escolhas[S] = {D1, D2, D3};
    }

    for (int i = 0; i < S; ++i) {
        string S, BG;
        cin >> S >> BG;

        if (escolhas.find(S) == escolhas.end()) {
            cout << S << " queria ganhar qualquer coisa e ganhou " << BG << "!\n";
            continue;
        }
 
        bool encontrou = false;
        for (const string& escolha : escolhas[S]) {
            if (escolha == BG) {
                encontrou = true;
                break;
            }
        }

        if (encontrou) {
            cout << S << " conseguiu ganhar " << BG << "!\n";
        } else {
            cout << S << " infelizmente ganhou " << BG << "...\n";
        }
    }
    
    return 0;
}