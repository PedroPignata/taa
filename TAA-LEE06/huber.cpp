#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii; 

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pii>> adj(N + 1);

    for (int i = 0; i < M; i++) {
        int U, V, W;
        cin >> U >> V >> W;
        adj[U].emplace_back(V, W);
        adj[V].emplace_back(U, W); 
    }
    
    vector<int> dist(N + 1, INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[1] = 0;
    pq.emplace(0, 1);

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if (current_dist > dist[current_node]) continue;
        for (auto &edge : adj[current_node]) {
            int neighbor = edge.first;
            int weight = edge.second;
            
            if (dist[neighbor] > dist[current_node] + weight) {
                dist[neighbor] = dist[current_node] + weight;
                pq.emplace(dist[neighbor], neighbor);
            }
        }
    }
    if (dist[N] != INT_MAX) {
        cout << "Distancia para chegar em casa: " << dist[N] << endl;
    } else {
        cout << "Preso no IDP" << endl;
    } 
    return 0;
}