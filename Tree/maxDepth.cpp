#include "tree.h"

int maxDepth(node *root)
{

    if (root == nullptr)
        return 0;

    int leftSubtreeMaxDepth = maxDepth(root->left);
    int rightSubtreeMaxDepth = maxDepth(root->right);

    return max(leftSubtreeMaxDepth, rightSubtreeMaxDepth) + 1;
}

int main()
{
    node* root = new node(3);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right = new node(7);

    cout << "Max Depth : " << maxDepth(root) << endl;
}