#include <iostream>
#include <stack>
using namespace std;

bool ParCorrespondente(char abertura, char fechamento) {
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '[' && fechamento == ']') ||
           (abertura == '{' && fechamento == '}');
}

int main() {
    string expressao;
    cin >> expressao;

    stack<char> pilha;

    for (char c : expressao) {

        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } 

        else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty() || !ParCorrespondente(pilha.top(), c)) {
                cout << "SyntaxError" << endl;
                return 0;
            }
            pilha.pop();
        }

    }

    if (pilha.empty()) {
        cout << "OK" << endl;
    } else {
        cout << "SyntaxError" << endl;
    }

    return 0;
}