#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int minmoedas(int M, const vector<int>& moedas) {
    vector<int> dp(M + 1, INF);
    dp[0] = 0;
    
    for (int moeda : moedas) {
        for (int j = moeda; j <= M; j++) {
            if (dp[j - moeda] != INF) {
                dp[j] = min(dp[j], dp[j - moeda] + 1);
            }
        }
    } 
    return dp[M];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M, C;
    cin >> M >> C;
    
    vector<int> moedas(C);
    for (int i = 0; i < C; i++) {
        cin >> moedas[i];
    }

    sort(moedas.rbegin(), moedas.rend());
    
    int result = minmoedas(M, moedas);   
    if (result == INF) {
        cout << "impossivel\n";
    } else {
        cout << result << '\n';
    }    
    return 0;
}