#include <bits/stdc++.h>
using namespace std;

int contarPedras(string bloco) {
    int pedras = 0;
    int abertos = 0; 

    for (char c : bloco) {
        if (c == '<') {
            abertos++;
        } else if (c == '>') {
            if (abertos > 0) {
                pedras++;  
                abertos--; 
            }
        }
    }

    return pedras;
}

int main() {
    int N;
    cin >> N; 
    cin.ignore();

    for (int i = 0; i < N; i++) {
        string bloco;
        getline(cin, bloco);

        int resultado = contarPedras(bloco);
        cout << resultado << endl;
    }

    return 0;
}
