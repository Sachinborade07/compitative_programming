#include<bits/stdc++.h>
using namespace std;

struct node {
  int val;
  node * left;
  node * right ;

  node(int value) : val(value), left(nullptr), right(nullptr) {}
};

// printing in INORDER format
void inorder(node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << " " << root->val;
    inorder(root->right);
}


// mirroring the tree
void mirrorify(node* root, node*& mirror) {
    if (root == nullptr) {
        mirror = nullptr;
        return;
    }

    // Create new mirror node from original tree node
    mirror = new node(root->val);
    mirrorify(root->left, mirror->right);
    mirrorify(root->right, mirror->left);
}

int main(){
    node* tree = new node(5);
    tree->left = new node(3);
    tree->right = new node(6);
    tree->left->left = new node(2);
    tree->left->right = new node(4);

    cout << "Inorder of original tree: ";
    inorder(tree);
  
    node* mirror = nullptr;
    mirrorify(tree, mirror);

    cout << "\nInorder of mirror tree: ";
    inorder(mirror);
  
  return 0;
}


// This concept is on geeks for geeks
https://www.geeksforgeeks.org/create-a-mirror-tree-from-the-given-binary-tree/
