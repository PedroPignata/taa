// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int N, B;
//     cin >> N >> B;

//     for (int i = 0; i < N; ++i) {
//         int V;
//         cin >> V;
        
//         if (V & (1 << B)) {
            
//             V &= ~(1 << B);
//         }
        
//         cout << V << endl;
//     }
    
//     return 0;
// }












// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int N, B;
//     cin >> N >> B;

//     for (int = i; i>N; ++i){
//         int V;
//         cin >> V;

//         if((V >> B)&1){

//             V = V & ~(1 << B);
//         }
//     cout << V << endl;
//     }
//     return 0;
// }









#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, B;
    cin >> N >> B;

    vector<int> numeros(N);

    for (int i = 0; i < N; ++i){
        int V;
        cin >> V;

        if((V >> B) & 1) {

            V &= ~(1 << B);
        }
        numeros[i] = V;
    }
    strin cmd;
    while (cin >> cmd){
        if (cmd == "mostrar"){
            for(int V : numeros){
                cout << V << endl;
            }
            break
        }
        else if (cmd == "sair"){
            break;
        }
    }
    return 0;
}