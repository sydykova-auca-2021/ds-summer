#include <bits/stdc++.h>

// 11
// 8 4 9 2 10 5 11 1 6 3 7

//          1
//    2          3
//  4    5     6   7
// 8 9 10 11


class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr){}

    ~Node() = default;
};

// INSERT
Node* insert(Node* node, int value){
    if(node == nullptr){
        return new Node(value);
    }

    if(value < node->value){
        node->left = insert(node->left, value);
    }

    if(value > node->value){
        node->right = insert(node->right, value);
    }
    return node;
}

// TRAVERSAL
void LVR(Node* node) {
    if(node == nullptr){
        return;
    }
    std::cout << node->value << " ";
    LVR(node->left);
    LVR(node->right);

//    if (v > n) {
//        return;
//    }
//    // left
//    LVR(2 * v, n);
//    std::cout << v << " ";
//    // right
//    LVR(2 * v + 1, n);
}

// DELETE
void delete_tree(Node* node){
    if(node == nullptr){
        return;
    }
    delete_tree(node->left);
    delete_tree(node->right);
    delete node;
}

int main(){
    int n;
    std::cin >> n;
    Node* root = nullptr;

    for(int i = 0; i < n; ++i){
        int num;
        std::cin >> num;
        root = insert(root, num);
    }

    LVR(root);
    delete_tree(root);
}