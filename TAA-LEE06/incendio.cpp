#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int start, int N, const vector<vector<int>>& adj) {
    vector<int> distance(N + 1, -1);
    queue<int> q;
    
    q.push(start);
    distance[start] = 0;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        
        for (int neighbor : adj[current]) {
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);
            }
        }
    }
    
    return distance;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> adj(N + 1); 
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    
    int C, E, F;
    cin >> C >> E >> F;

    vector<int> distFromAgent = bfs(C, N, adj);
    vector<int> distFromExtinguisher = bfs(E, N, adj);
    int total_path = distFromAgent[E] + distFromExtinguisher[F];
    
    cout << total_path << endl;
    
    return 0;
}