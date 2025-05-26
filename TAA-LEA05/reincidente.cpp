#include <bits/stdc++.h>
using namespace std;

int main(){

unordered_map<string, int> database;
    string S;
    int A;

    while (true){
        cin >> S >> A;

        if (S == "fim" && A == 0) {
            break;
        }

        if (database.find(S) == database.end()) {

            database[S] = 1;
            cout << S << " eh reu primario" << endl;
        } else {

            database[S]++;
            cout << S << " eh reincidente com " << database[S] - 1 << " crime(s)" << endl;
        }
    }
    return 0;
}