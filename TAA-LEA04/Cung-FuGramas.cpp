#include <bits/stdc++.h>
using namespace std;

bool Heterograma(const string& word) {
    unordered_set<char> seen;
    for (char c : word) {
        if (seen.count(c)) {
            return false;
        }
        seen.insert(c);
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; N > i; i++){
        string word;
        getline(cin, word);

        if (Heterograma(word)){
            cout << "STRONGRAMA" << endl;
        } else {
            cout << "WEAKORD" << endl;
        }
    }
    return 0;
}
