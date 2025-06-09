#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
unordered_set<int> cameras;

vector<int> bfs(int start, bool avoid_cameras) {
    vector<int> dist(adj.size(), INT_MAX);
    queue<int> q;
    
    if (avoid_cameras && cameras.count(start)) {
        return dist;
    }
    
    dist[start] = 0;
    q.push(start);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (avoid_cameras && cameras.count(v)) {
                continue; 
            }
            if (dist[v] == INT_MAX) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, C;
    cin >> N >> M >> C;
    
    adj.resize(N + 1);
    
    for (int i = 0; i < C; ++i) {
        int P;
        cin >> P;
        cameras.insert(P);
    }
    
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    
    int E, S, K;
    cin >> E >> S >> K;

    vector<int> dist_to_key = bfs(E, true);
    int distance_key = dist_to_key[K];

    vector<int> dist_to_exit = bfs(E, false);
    int distance_exit = dist_to_exit[S];
    
    if (distance_key == INT_MAX || distance_exit == INT_MAX) {
        cout << "impossivel fugir" << endl;
    } else {
        cout << 2 * distance_key << " " << distance_exit << endl;
    }   
    return 0;
}