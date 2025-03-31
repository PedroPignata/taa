#include <iostream>
#include<bitset>
using namespace std;

int main(){

    int T;
    cin >> T;

    while(T--){

        unsigned long long A, B, Y, C;
        cin >> A >> B >> Y;

        C = Y ^ (A ^ B);

        cout << C << endl;

    }
}