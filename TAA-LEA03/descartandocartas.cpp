#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> baralho;
    string descartadas = "";

    for (int i = N; i >= 1; i--) {
        baralho.push(i);
    }

    while (baralho.size() > 1) {
        
        descartadas += to_string(baralho.front()) + ", ";
        baralho.pop();

        baralho.push(baralho.front());
        baralho.pop();
    }

    if (!descartadas.empty()) {
        descartadas.pop_back(); 
        descartadas.pop_back(); 
    }

    cout << "Descarte: " << descartadas << endl;
    cout << "Ultima carta: " << baralho.front() << endl;

    return 0;
}
