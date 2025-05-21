#include <bits/stdc++.h>
using namespace std;

struct No {
    int valor;
    No* proximo;

    No(int v) {
        valor = v;
        proximo = NULL;
    }
};

int calcularHash(int chave, int tamanhoTabela) {
    return chave % tamanhoTabela;
}

void inserir(vector<No*>& tabela, int chave, int tamanhoTabela) {

    int indice = calcularHash(chave, tamanhoTabela);

    No* novoNo = new No(chave);

    if (tabela[indice] == NULL) {
        tabela[indice] = novoNo;
    } 
    else {
        No* atual = tabela[indice];

        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
    }
}

void imprimirTabela(vector<No*>& tabela, int tamanhoTabela) {
    for (int i = 0; i < tamanhoTabela; i++) {
        cout << i << " -> ";

        No* atual = tabela[i];
        while (atual != NULL) {
            cout << atual->valor << " -> ";
            atual = atual->proximo;
        }

        cout << "\\" << endl;
    }
}

void liberarMemoria(vector<No*>& tabela, int tamanhoTabela) {
    for (int i = 0; i < tamanhoTabela; i++) {
        No* atual = tabela[i];
        while (atual != NULL) {
            No* temp = atual;
            atual = atual->proximo;
            delete temp;
        }
    }
}

int main() {
    int M, C;
    cin >> M >> C;

    vector<No*> tabelaHash(M, NULL);

    for (int i = 0; i < C; i++) {
        int chave;
        cin >> chave;
        inserir(tabelaHash, chave, M);
    }

    imprimirTabela(tabelaHash, M);
    liberarMemoria(tabelaHash, M);
    
    return 0;
}
