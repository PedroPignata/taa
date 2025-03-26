#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--){
        unsigned long long A, B, Y;
        cin >> A >> B >> Y;
        
        unsigned long long AB = A | B;
        unsigned long long C = Y & ~AB;

        if ((AB | C) == Y) {
            cout << C << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}