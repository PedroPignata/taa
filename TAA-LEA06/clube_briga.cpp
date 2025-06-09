#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int u) {
    if (parent[u] != u) {
        parent[u] = find(parent[u]);
    }
    return parent[u];
}

void unionSets(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);
    if (rootU != rootV) {
        parent[rootV] = rootU;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    parent.resize(N + 1);
    for (int i = 1; i <= N; ++i) {
        parent[i] = i;
    }
    
    for (int i = 0; i < M; ++i) {
        int U, V;
        cin >> U >> V;
        unionSets(U, V);
    }
    
    int gangs = 0;
    for (int i = 1; i <= N; ++i) {
        if (find(i) == i) {
            gangs++;
        }
    }
    
    cout << gangs << " gangue(s) no clube da briga\n";
    
    return 0;
}