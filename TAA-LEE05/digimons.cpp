#include <bits/stdc++.h>
using namespace std;

struct Digimon {
    string nome;
    int fome;
    int ordemChegada;
    
    bool operator<(const Digimon& outro) const {
        if (fome == outro.fome) {
            return ordemChegada > outro.ordemChegada; 
        }
        return fome < outro.fome;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A;
    cin >> A;
    
    priority_queue<Digimon> fila;
    unordered_map<string, Digimon> digimons;
    unordered_set<string> removidos;
    int contadorOrdem = 0;
    
    for (int i = 0; i < A; ++i) {
        string acao;
        cin >> acao;
        
        if (acao == "CHEGA") {
            string nome;
            int fome;
            cin >> nome >> fome;
            Digimon d = {nome, fome, contadorOrdem++};
            fila.push(d);
            digimons[nome] = d;
        } else if (acao == "FOME") {
            string nome;
            int aumento;
            cin >> nome >> aumento;
            if (digimons.find(nome) != digimons.end()) {
                Digimon d = digimons[nome];
                d.fome += aumento;
                fila.push(d);
                digimons[nome] = d;
            }
        } else if (acao == "SAI") {
            string nome;
            cin >> nome;
            removidos.insert(nome);
            digimons.erase(nome);
        } else if (acao == "SERVE") {
            while (!fila.empty()) {
                Digimon d = fila.top();
                fila.pop();
                if (removidos.find(d.nome) == removidos.end() && digimons.find(d.nome) != digimons.end() && digimons[d.nome].fome == d.fome && digimons[d.nome].ordemChegada == d.ordemChegada) {
                    cout << d.nome << endl;
                    digimons.erase(d.nome);
                    break;
                }
            }
        }
    }
    
    return 0;
}