#include "tree.h"

vector<int> solve(node *A, int B)
{

    if (A == nullptr)
        return {};
    if (A->val == B)
        return {A->val};

    vector<int> l_tree = solve(A->left, B);
    if (!l_tree.empty())
    {
        l_tree.insert(l_tree.begin(), A->val);
        return l_tree;
    }
    vector<int> r_tree = solve(A->right, B);
    if (!r_tree.empty())
    {
        r_tree.insert(r_tree.begin(), A->val);
        return r_tree;
    }
    return {};
}

int main()
{
    node *root = new node(1);
    root->left = new node(4);
    root->right = new node(5);
    root->left->left = new node(2);
    root->left->right = new node(3);
    root->right->right = new node(7);
    root->right->left = new node(6);

    vector<int> path = solve(root, 3);

    for (auto i : path)
        cout << i << "  ";
    cout << endl;
}