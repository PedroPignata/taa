#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    
    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        
        if (value < node->value) {
            node->left = insert(node->left, value);
        } else if (value > node->value) {
            node->right = insert(node->right, value);
        }
        
        return node;
    }

    void meio(Node* node, vector<int>& result) {
        if (node == nullptr) return;
        meio(node->left, result);
        result.push_back(node->value);
        meio(node->right, result);
    }
    
    void inicio(Node* node, vector<int>& result) {
        if (node == nullptr) return;
        result.push_back(node->value);
        inicio(node->left, result);
        inicio(node->right, result);
    }
    
    void final(Node* node, vector<int>& result) {
        if (node == nullptr) return;
        final(node->left, result);
        final(node->right, result);
        result.push_back(node->value);
    }
    
public:
    BST() : root(nullptr) {}
    
    void insert(int value) {
        root = insert(root, value);
    }
    
    vector<int> meioTraversal() {
        vector<int> result;
        meio(root, result);
        return result;
    }
    
    vector<int> inicioTraversal() {
        vector<int> result;
        inicio(root, result);
        return result;
    }
    
    vector<int> finalTraversal() {
        vector<int> result;
        final(root, result);
        return result;
    }
};

int main() {
    int N;
    cin >> N;
    
    BST tree;

    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        tree.insert(value);
    }

    vector<int> meio = tree.meioTraversal();
    vector<int> inicio = tree.inicioTraversal();
    vector<int> final = tree.finalTraversal();
    
    cout << "In.: ";
    for (size_t i = 0; i < meio.size(); i++) {
        if (i > 0) cout << " ";
        cout << meio[i];
    }
    cout << endl;
    
    cout << "Pre: ";
    for (size_t i = 0; i < inicio.size(); i++) {
        if (i > 0) cout << " ";
        cout << inicio[i];
    }
    cout << endl;
    
    cout << "Pos: ";
    for (size_t i = 0; i < final.size(); i++) {
        if (i > 0) cout << " ";
        cout << final[i];
    }
    cout << endl;
    
    return 0;
}