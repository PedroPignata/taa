#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int V) {
    if (V <= 1) return false;
    if (V == 2) return true;
    if (V % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(V); i += 2) {
        if (V % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cin >> N;

        if(N < 1 || N > 1000){
            cout << "Valor de N fora dos limites permitidos (1 ≤ N ≤ 1000)." << endl;
            return 0;
        }

    for (int i = 0; i < N; i++){
    int V;            
    cin >> V;          

    if (isPrime(V)) {
        cout << "o numero " << V << " eh primo" << endl;
        } else {
            cout << "o numero " << V << " nao eh primo" << endl;
        }
    }
    
    return 0;
}