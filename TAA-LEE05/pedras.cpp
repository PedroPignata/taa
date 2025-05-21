#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    for (int t = 0; t < T; t++) {
        string P, C;
        cin >> P >> C;

        unordered_set<char> bloco;
        for (char p : P) {
            bloco.insert(p);
        }

        int pedras_negociaveis = 0;
        unordered_set<char> catalogo_contado;
        
        for (char c : C) {

            if (catalogo_contado.count(c) == 0 && bloco.count(c) > 0) {
                pedras_negociaveis++;
                catalogo_contado.insert(c);
            }
        } 
        cout << "Contem " << pedras_negociaveis << " pedras negociaveis" << endl;
    }   
    return 0;
}
