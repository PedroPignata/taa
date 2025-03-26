#include <iostream>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;
    
    for (int i = 0; i < N; ++i) {
        int V;
        cin >> V;
        
        int resultado = V | (1 << B);
        
        cout << resultado << endl;
    }
    
    return 0;
}