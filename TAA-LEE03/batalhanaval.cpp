// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n, m, q, v;
//     vector<pair<int, pair<int, int>>> valores

//     for (int i = 0; i < n; i++){
//         for (j=0; j<m; j++){
//             cin >> v;
//             valores.push_back({v, {i, j}})
//         }

//     }

//     cin >> n >> m >> q;

//     auto comparator = [](const pair<int, pair<int, int>> &a, const int &b){
//         return a.first < b:
//     }

//     cin >> v; //representa uma consulta

//     auto it = lower_bound(valores.begin(), valores.end(), v, comparator)

//     if ((it == valores.end()) || (it->first != v)){
//         cout << "-1, -1\n";
//     }
//     else{
//         cout << it->second.first << ", " << it->second.second << en
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, q, v;

    cin >> n >> m >> q; 

    vector<pair<int, pair<int, int>>> valores;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v;
            valores.push_back({v, {i, j}});
        }
    }
    
    sort(valores.begin(), valores.end());
    
    auto comparator = [](const pair<int, pair<int, int>> &a, const int &b) {
        return a.first < b;
    };
   
    for (int i = 0; i < q; i++) {
        cin >> v; 

        auto it = lower_bound(valores.begin(), valores.end(), v, comparator);

        if (it == valores.end() || it->first != v) {
            cout << "-1, -1\n";
        } else {
            cout << it->second.first << ", " << it->second.second << "\n";
        }
    }

    return 0;
}
