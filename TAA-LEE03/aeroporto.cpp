#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string entrada;
    queue<string> norte, sul, leste, oeste;

    char direcaoAtual;

    while (cin >> entrada && entrada != "0") {
        if (entrada == "N" || entrada == "S" || entrada == "L" || entrada == "O") {
            direcaoAtual = entrada[0]; 
        } else {

            if (direcaoAtual == 'N') norte.push(entrada);
            else if (direcaoAtual == 'S') sul.push(entrada);
            else if (direcaoAtual == 'L') leste.push(entrada);
            else if (direcaoAtual == 'O') oeste.push(entrada);
        }
    }

    vector<string> filaFinal;
    while (!norte.empty() || !sul.empty() || !leste.empty() || !oeste.empty()) {
        if (!norte.empty()) {
            filaFinal.push_back(norte.front());
            norte.pop();
        }
        if (!sul.empty()) {
            filaFinal.push_back(sul.front());
            sul.pop();
        }
        if (!leste.empty()) {
            filaFinal.push_back(leste.front());
            leste.pop();
        }
        if (!oeste.empty()) {
            filaFinal.push_back(oeste.front());
            oeste.pop();
        }
    }

    for (size_t i = 0; i < filaFinal.size(); ++i) {
        cout << filaFinal[i];
        if (i != filaFinal.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}