#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    
    vector<int> tree(N);
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
    }

    unordered_map<int, int> index_to_parent;
    for (int i = 0; i < N; i++) {
        if (tree[i] == -1) continue;
        
        int left_child = 2 * i + 1;
        int right_child = 2 * i + 2;
        
        if (left_child < N) {
            index_to_parent[left_child] = i;
        }
        if (right_child < N) {
            index_to_parent[right_child] = i;
        }
    }

    for (int i = 0; i < C; i++) {
        int query;
        cin >> query;
        query--; 

        if (query < 0 || query >= N) {
            cout << "NULL" << endl;
            continue;
        }

        if (tree[query] == -1) {
            if (index_to_parent.count(query)) {
                cout << tree[index_to_parent[query]] << endl;
            } else {
                cout << "NULL" << endl;
            }
            continue;
        }

        if (query == 0) {
            cout << "RAIZ" << endl;
        } else if (index_to_parent.count(query)) {
            cout << tree[index_to_parent[query]] << endl;
        } else {
            cout << "NULL" << endl;
        }
    }
    
    return 0;
}