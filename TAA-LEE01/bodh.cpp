#include <iostream>
#include <string>

using namespace std;

void converterBase(unsigned long long N, int B) {
    if (N == 0) {
        cout << "0" << endl;
        return;
    }
    
    string resultado = "";
    string digitos = "0123456789ABCDEF";
    
    while (N > 0) {
        resultado = digitos[N % B] + resultado;
        N /= B;
    }
    
    cout << resultado << endl;
}

int main() {
    unsigned long long N;
    int B;
    
    while (cin >> N >> B) {
        if (N == -1 && B == -1) {
            break;
        }

        // Verificação de limites
        if (N >= (1ULL << 63)) {  // 2^63
            cerr << "Erro: N está fora do limite permitido (0 ≤ N < 2^63)." << endl;
            continue;
        }
        if (B < 2 || B > 16) {
            cerr << "Erro: B deve estar no intervalo (2 ≤ B ≤ 16)." << endl;
            continue;
        }

        converterBase(N, B);
    }
    
    return 0;
}
