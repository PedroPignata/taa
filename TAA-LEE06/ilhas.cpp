#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> adj(N + 1);

    for (int i = 0; i < M; i++) {
        int X, Y;
        cin >> X >> Y;
        adj[X].push_back(Y);
        adj[Y].push_back(X); 
    }
    
    vector<int> distance(N + 1, -1);
    queue<int> q;

    q.push(1);
    distance[1] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : adj[current]) {
            if (distance[neighbor] == -1) { 
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);

                if (neighbor == N) {
                    cout << distance[N] << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}