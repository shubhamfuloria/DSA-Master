#include "tree.h"

int minDepth(node *root)
{
    if (root == nullptr)
        return 0;

    int left_min_depth = minDepth(root->left);
    int right_min_depth = minDepth(root->right);

    if (left_min_depth == 0)
        return right_min_depth + 1;
    if (right_min_depth == 0)
        return left_min_depth + 1;

    return min(left_min_depth, right_min_depth) + 1;
}

int main()
{
    node *root = new node(3);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right = new node(7);

    cout << minDepth(root) << endl;
}