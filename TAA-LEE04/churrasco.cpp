#include <bits/stdc++.h>
using namespace std;

int main() {
    int A;
    cin >> A;
    
    set<string> itens_churrasco;
    vector<string> ordem_iserir;
    
    for (int i = 0; i < A; i++) {
        int P;
        cin >> P;
        
        for (int j = 0; j < P; j++) {
            string S;
            cin >> S;

            if (itens_churrasco.find(S) == itens_churrasco.end()) {
                cout << "adicionando " << S << endl;
                itens_churrasco.insert(S);
                ordem_iserir.push_back(S);
            } else {
                cout << S << " ja tem" << endl;
            }
        }
    }
    
    vector<string> itens_ordenados(itens_churrasco.begin(), itens_churrasco.end());
    sort(itens_ordenados.begin(), itens_ordenados.end());
    
    cout << "Itens do churrasco:" << endl;
    for (const string& S : itens_ordenados) {
        cout << S << endl;
    }
    
    return 0;
}