#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, C;
    cin >> N >> C;
    
    vector<int> tree(N);
    for (auto& node : tree) cin >> node;
    
    while (C--) {
        int pos;
        cin >> pos;
        pos--;
        
        if (pos < 0 || pos >= N) {
            cout << "NULL NULL\n";
            continue;
        }
        
        int left = 2*pos + 1;
        int right = 2*pos + 2;
        
        cout << (left < N && tree[left] != -1 ? to_string(tree[left]) : "NULL") << " "
             << (right < N && tree[right] != -1 ? to_string(tree[right]) : "NULL") << "\n";
    }
    
    return 0;
}