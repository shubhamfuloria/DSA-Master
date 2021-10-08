#include "tree.h"

node* invertTree(node* root)
{
    if(root == nullptr)
        return root;

    node* left_inverted_tree = invertTree(root->left);
    node* right_inverted_tree = invertTree(root->right);

    root->left = right_inverted_tree;
    root->right = left_inverted_tree;

    return root;
}

int main()
{
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(9);

    inorderTraversal(root);
    cout << endl;
    root = invertTree(root);
    inorderTraversal(root);
    cout << endl;
}