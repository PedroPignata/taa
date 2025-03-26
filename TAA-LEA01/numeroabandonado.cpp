#include <iostream>
#include <vector>

using namespace std;

// bool impar(int N) {
//     return N % 2 != 0;
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N && N != -1){

        if (N < 1 || N > 9999) {
            cout << "Valor de D fora dos limites permitidos (1≤N≤9999)." << endl;
            continue; 
        }

        int numero_abandonado = 0;

        for (int i= 0; i < N; i++){
            int V;
            cin >> V;
            numero_abandonado ^= V;  
        }
       
        cout << numero_abandonado << endl;

    }
    return 0;
}