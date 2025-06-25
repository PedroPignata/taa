#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        cin >> cards[i];
    }

    vector<vector<int>> dp(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        dp[i][i] = cards[i];
    }

    for (int comp = 2; comp <= N; ++comp) {
        for (int i = 0; i <= N - comp; ++i) {
            int j = i + comp - 1;
            int esq = cards[i] + min(
                (i + 2 <= j ? dp[i+2][j] : 0),
                (i + 1 <= j - 1 ? dp[i+1][j-1] : 0)
            );
            int dir = cards[j] + min(
                (i <= j - 2 ? dp[i][j-2] : 0),
                (i + 1 <= j - 1 ? dp[i+1][j-1] : 0)
            );
            dp[i][j] = max(esq, dir);
        }
    }

    cout << dp[0][N-1] << '\n';
    return 0;
}
