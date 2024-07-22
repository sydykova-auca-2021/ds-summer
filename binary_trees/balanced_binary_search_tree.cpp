#include <bits/stdc++.h>

class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr){}

    ~Node() = default;
};

Node* build(const std::vector<int>& a, size_t left, size_t right){
    if(left >= right){
        return nullptr;
    }
    size_t mid = (left + right) / 2;
    Node* node = new Node(a[mid]);

    node->left = build(a, left, mid);
    node->right = build(a, mid + 1, right);

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
    std::ios::sync_with_stdio(false); // turn off sync with scanf/printf; needs include <iomanip>
    std::cin.tie(NULL); // turn off sync between cin and cout

    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    Node* root = build(a, 0, a.size());

    LVR(root);
    std::cout << "\n";
    delete_tree(root);
    return 0;
}