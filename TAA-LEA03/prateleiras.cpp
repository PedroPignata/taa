#include <bits/stdc++.h>
using namespace std;

bool comparaTitulos(const string &a, const string &b) {
    if (a.size() != b.size()) {
        return a.size() < b.size(); 
    }
    return a < b;
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    vector<string> livros(N);

    for (int i = 0; i < N; ++i) {
        getline(cin, livros[i]); 
    }
    

    sort(livros.begin(), livros.end(), comparaTitulos);

    for (const string &titulo : livros) {
        cout << titulo << endl;
    }

    return 0;
    
}