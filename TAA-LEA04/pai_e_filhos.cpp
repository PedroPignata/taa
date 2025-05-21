#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> tree(N);
    for (int i = 0; i < N; ++i) {
        cin >> tree[i];
    }

    int C;
    cin >> C;
    for (int i = 0; i < C; ++i) {
        int V;
        cin >> V;
        V -= 1; 

        if (V < 0 || V >= N || tree[V] == -1) {
            cout << "NULL" << endl;
            continue;
        }

        if (V == 0) {
            cout << "RAIZ - ";
        } else {
            int parentesco = (V - 1) / 2;
            if (parentesco >= 0 && parentesco < N && tree[parentesco] != -1) {
                cout << tree[parentesco] << " - ";
            } else {
                cout << "NULL - ";
            }
        }

        int filho_esq = 2 * V + 1;
        if (filho_esq < N && tree[filho_esq] != -1) {
            cout << tree[filho_esq] << " ";
        } else {
            cout << "NULL ";
        }

        int filho_dir = 2 * V + 2;
        if (filho_dir < N && tree[filho_dir] != -1) {
            cout << tree[filho_dir];
        } else {
            cout << "NULL";
        }

        cout << endl;
    }

    return 0;
}