#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
vector<vector<pii>> adj;

vector<int> dijkstra(int start, int N) {
    vector<int> dist(N + 1, INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int u = pq.top().second;
        int current_dist = pq.top().first;
        pq.pop();
        
        if (current_dist > dist[u]) {
            continue;
        }
        
        for (auto &edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    adj.resize(N + 1);
    
    for (int i = 0; i < M; ++i) {
        int U, V, W;
        cin >> U >> V >> W;
        adj[U].push_back({V, W});
        adj[V].push_back({U, W});
    }
    
    vector<int> dist = dijkstra(1, N);
    
    int max_dist = 0;
    bool unreachable = false;
    
    for (int i = 2; i <= N; ++i) {
        if (dist[i] == INT_MAX) {
            unreachable = true;
            break;
        }
        if (dist[i] > max_dist) {
            max_dist = dist[i];
        }
    }   
    if (unreachable) {
        cout << "Impossivel chegar" << endl;
    } else {
        cout << "Casa mais distante a " << max_dist << " metros" << endl;
    }   
    return 0;
}