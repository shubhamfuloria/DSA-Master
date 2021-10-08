#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;

    node(int value)
    {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorderTraversal(node *root)
{
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->val << "  ";
    inorderTraversal(root->right);
}