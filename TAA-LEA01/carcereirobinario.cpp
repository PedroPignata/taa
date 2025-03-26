#include <iostream>
using namespace std;

int main() {
    unsigned long long N;
    int Q; 
    cin >> N >> Q;
    
    while (Q--) {
        int C;
        cin >> C;

        if (N & (1ULL << C)) {
            cout << "acesa" << endl;
        } else {
            cout << "apagada" << endl;
        }
    }
    
    return 0;
}
