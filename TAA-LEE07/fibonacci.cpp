#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 10000;

vector<long long> precompute_fibonacci() {
    vector<long long> fib(MAX_N + 1);
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i <= MAX_N; i++) {
        fib[i] = (fib[i-1] + fib[i-2]) % MOD;
    }
    
    return fib;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> fib = precompute_fibonacci();
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << fib[N] << '\n';
    }
    
    return 0;
}