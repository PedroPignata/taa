#include <bits/stdc++.h>
using namespace std;

int main() {
    int V;
    cin >> V;

    vector<vector<int>> matrix(V, vector<int>(V, 0));
    
    for (int i = 0; i < V; i++) {
        int E;
        cin >> E;
        for (int j = 0; j < E; j++) {
            int A;
            cin >> A;

            matrix[i][A-1] = 1;
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << matrix[i][j];
            if (j != V-1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}