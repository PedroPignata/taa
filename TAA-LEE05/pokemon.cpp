#include <bits/stdc++.h>
using namespace std;

struct Pokemon {
    string S; // nome
    int F;    // força
    int id; 

    bool operator<(const Pokemon& outro) const {
        if (F == outro.F)
            return S < outro.S; 
        return F < outro.F;      
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int P;
    cin >> P;

    priority_queue<Pokemon> torneio;

    for (int i = 0; i < P; ++i) {
        string S;
        int F;
        cin >> S >> F;
        torneio.push({S, F, i});
    }

    while (torneio.size() > 1) {
        Pokemon primeiro = torneio.top(); torneio.pop();
        Pokemon segundo = torneio.top(); torneio.pop();

        if (primeiro.F == segundo.F) {
            
            if (primeiro.S > segundo.S) {
                cout << primeiro.S << " (" << primeiro.F << ") x (" << segundo.F << ") " << segundo.S << " : empate" << endl;
            } else {
                cout << segundo.S << " (" << segundo.F << ") x (" << primeiro.F << ") " << primeiro.S << " : empate" << endl;
            }
        } else if (primeiro.F > segundo.F) {
            cout << primeiro.S << " (" << primeiro.F << ") x (" << segundo.F << ") " << segundo.S << " : "
                 << primeiro.S << " venceu" << endl;
            primeiro.F -= segundo.F;
            if (primeiro.F > 0) {
                torneio.push(primeiro);
            }
        } else {
            cout << segundo.S << " (" << segundo.F << ") x (" << primeiro.F << ") " << primeiro.S << " : "
                 << segundo.S << " venceu" << endl;
            segundo.F -= primeiro.F;
            if (secondo.F > 0) {
                torneio.push(segundo);
            }
        }
    }

    if (!torneio.empty()) {
        Pokemon vencedor = torneio.top();
        cout << vencedor.S << " venceu com " << vencedor.F << endl;
    } else {
        cout << "nenhum vencedor" << endl;
    }

    return 0;
}
