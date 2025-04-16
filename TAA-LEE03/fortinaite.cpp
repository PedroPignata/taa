#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

struct Jogador {
    string nome;
    int tempoTotal; // tempo em segundos
    string tempoStr; // tempo no formato original MM:SS

    Jogador(string n, int tempo, string tempoFormatado) : nome(n), tempoTotal(tempo), tempoStr(tempoFormatado) {}
};

int converterParaSegundos(const string& tempo) {
    int minutos = stoi(tempo.substr(0, 2));
    int segundos = stoi(tempo.substr(3, 2));
    return minutos * 60 + segundos;
}

bool comparar(const Jogador& a, const Jogador& b) {
    if (a.tempoTotal != b.tempoTotal)
        return a.tempoTotal > b.tempoTotal;
    return a.nome > b.nome; 
}

int main() {
    int J;
    cin >> J;
    vector<Jogador> jogadores;

    for (int i = 0; i < J; ++i) {
        string nome, tempo;
        cin >> nome >> tempo;
        int tempoEmSegundos = converterParaSegundos(tempo);
        jogadores.emplace_back(nome, tempoEmSegundos, tempo);
    }

    sort(jogadores.begin(), jogadores.end(), comparar);

    for (int i = 0; i < J; ++i) {
        cout << i + 1 << ". " << jogadores[i].tempoStr << " - " << jogadores[i].nome << endl;
    }

    return 0;
}
