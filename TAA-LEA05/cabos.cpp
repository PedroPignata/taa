#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> min_heap;
    for (int i = 0; i < N; ++i) {
        int C;
        cin >> C;
        min_heap.push(C);
    }

    int total_cost = 0;

    while (min_heap.size() > 1) {
        int first = min_heap.top();
        min_heap.pop();
        int second = min_heap.top();
        min_heap.pop();

        int cost = max(first, second);
        total_cost += cost;

        min_heap.push(first + second);
    }

    cout << total_cost << endl;
    
    return 0;

}