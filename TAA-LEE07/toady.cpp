#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<int> v(N, INT_MAX);
    v[0] = 0;
    
    for (int i = 0; i < N; i++) {
        if (i + 1 < N) {
            v[i+1] = min(v[i+1], v[i] + abs(h[i] - h[i+1]));
        }
        if (i + 2 < N) {
            v[i+2] = min(v[i+2], v[i] + abs(h[i] - h[i+2]));
        }
    }
    
    cout << v[N-1] << '\n';    
    return 0;
}