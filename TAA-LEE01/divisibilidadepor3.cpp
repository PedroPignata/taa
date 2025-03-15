#include <iostream>
#include <vector>

using namespace std;

int main() {
    int D;
    while (cin >> D && D != -1) {
       
        if (D < 1 || D > 100000) {
            cout << "Valor de D fora dos limites permitidos (1 ≤ D ≤ 100000)." << endl;
            continue; 
        }

        string N;
        cin >> N;
        
        int sum = 0;
        for (char ch : N) {
            sum += (ch - '0');
        }
        
        cout << sum << " ";
        if (sum % 3 == 0) {
            cout << "sim" << endl;
        } else {
            cout << "nao" << endl;
        }
    }
    
    return 0;
}

//
// int main() {
//     int N;
//     cin >> N;
    
//     vector<int> numbers(N - 1);
//     long long sum = 0;
    
//     for (int i = 0; i < N - 1; ++i) {
//         cin >> numbers[i];
//         sum += numbers[i];
//     }
    
//     long long expectedSum = (long long)N * (N + 1) / 2;
//     int missingNumber = expectedSum - sum;
    
//     cout << missingNumber << endl;
    
//     return 0;
// }