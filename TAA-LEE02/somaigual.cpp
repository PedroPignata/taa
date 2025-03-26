#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int V[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &V[i]);
        }
        
        int S;
        scanf("%d", &S);
        
        int encontrou = 0;
        int esquerda = 0;
        int direita = N - 1;
        
        while (esquerda < direita) {
            int soma = V[esquerda] + V[direita];
            if (soma == S) {
                encontrou = 1;
                break;
            } else if (soma < S) {
                esquerda++;
            } else {
                direita--;
            }
        }
        
        if (encontrou) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }
    
    return 0;
}