#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    
    vector<int> count(256, 0);
    
    for (char c : s1) {
        count[c]++;
    }
    
    for (char c : s2) {
        count[c]--;
        if (count[c] < 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string R, S;
        cin >> R >> S;
        
        if (areAnagrams(R, S)) {
            cout << "ANAGRAMAS" << endl;
        } else {
            cout << "DIFERENTES" << endl;
        }
    }
    
    return 0;
}