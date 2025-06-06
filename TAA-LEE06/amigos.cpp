#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> adj(N + 1);

    for (int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        adj[U].push_back(V);
        adj[V].push_back(U); 
    }
    
    vector<bool> visited(N + 1, false);
    queue<int> q;
    int components = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            components++;
            if (components > 1) break;
            
            q.push(i);
            visited[i] = true;
            
            while (!q.empty()) {
                int current = q.front();
                q.pop();
                
                for (int neighbor : adj[current]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }
        }
    }
    
    if (components == 1) {
        cout << "Todo mundo eh amigo de todo mundo" << endl;
    } else {
        cout << "Varios grupos de amigos" << endl;
    }
    
    return 0;
}