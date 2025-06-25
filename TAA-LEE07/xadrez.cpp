#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int L, C;
    cin >> L >> C;
    
    vector<vector<char>> grade(L, vector<char>(C));
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grade[i][j];
        }
    }

    if (grade[0][0] == '#' || grade[L-1][C-1] == '#') {
        cout << -1 << '\n';
        return 0;
    }
    
    vector<vector<int>> v(L, vector<int>(C, 0));
    v[0][0] = 1;
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (grade[i][j] == '#') continue;
            
            if (i > 0 && grade[i-1][j] != '#') {
                v[i][j] = (v[i][j] + v[i-1][j]) % MOD;
            }
            if (j > 0 && grade[i][j-1] != '#') {
                v[i][j] = (v[i][j] + v[i][j-1]) % MOD;
            }
        }
    }
    
    if (v[L-1][C-1] == 0) {
        cout << -1 << '\n';
    } else {
        cout << v[L-1][C-1] << '\n';
    }
    
    return 0;
}