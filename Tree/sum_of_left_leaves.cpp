#include "tree.h"

int left_leaves_sum(node* root)
{
    if(root == nullptr)
        return 0;
    
    if(root->left != nullptr and root->left->left == nullptr and root->left->right == nullptr)
        return root->left->val + left_leaves_sum(root->right);

    int left_subtree_left_leaves = left_leaves_sum(root->left);
    int right_subtree_left_leaves = left_leaves_sum(root->right);

    return left_subtree_left_leaves + right_subtree_left_leaves;
}

int main()
{
    node* root = new node(3);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right = new node(7);

    cout << left_leaves_sum(root) << endl;
}