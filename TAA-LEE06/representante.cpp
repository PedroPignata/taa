#include <bits/stdc++.h>
using namespace std;

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
    
    vector<bool> visited(N + 1, false);
    int max_group = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int current_group = 0;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            
            while (!q.empty()) {
                int current = q.front();
                q.pop();
                current_group++;
                
                for (int neighbor : adj[current]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }
            
            max_group = max(max_group, current_group);
        }
    }
    
    cout << "O grupo mais numeroso tem " << max_group << " aluno(s)" << endl;
    
    return 0;
}