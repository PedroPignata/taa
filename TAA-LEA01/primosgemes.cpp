#include <iostream>
#include <vector>
#include <math.h>

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

bool ehPrimoGemeo(int num) {
    if (!isPrime(num)) return false;
    return isPrime(num - 2) || isPrime(num + 2);
}

int main() {
    int N, V;
    cin >> N;
    
    while (N--) {
        cin >> V;
        if (ehPrimoGemeo(V)) {
            cout << "O numero " << V << " eh um primo gemeo" << endl;
        } else {
            cout << "O numero " << V << " nao eh um primo gemeo" << endl;
        }
    }
    
    return 0;
}
