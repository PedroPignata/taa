#include <bits/stdc++.h>
using namespace std;

string get_sorted_unique(const string &s) {
    unordered_set<char> unique_chars;
    for (char c : s) {
        unique_chars.insert(c);
    }
    string result(unique_chars.begin(), unique_chars.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    string S;
    cin >> S;

    int n = S.size();
    for (int i = 1; i <= n; ++i) {
        string original_part = S.substr(0, n - i);
        string sorted_unique_part = get_sorted_unique(original_part);
        if (S.substr(n - i) == sorted_unique_part) {
            cout << sorted_unique_part << endl;
            return 0;
        }
    }

    cout << "" << endl;
    return 0;
}