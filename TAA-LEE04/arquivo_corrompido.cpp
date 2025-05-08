#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int L;
        cin >> L;
        
        unordered_map<int, unordered_map<string, bool>> registros;
        int erros = 0;
        
        while (L--) {
            int matricula;
            string disciplina;
            cin >> matricula >> disciplina;
            
            if (registros[matricula][disciplina]) {
                erros++;
            } else {
                registros[matricula][disciplina] = true;
            }
        }
        
        cout << (erros ? "Corrompido com " + to_string(erros) + " erro(s)" : "Arquivo OK") << endl;
    }
    
    return 0;
}