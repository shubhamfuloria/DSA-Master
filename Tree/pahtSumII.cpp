#include "tree.h"

vector<vector<int>> getPaths(node* root, int target)
{
    if(root == nullptr)
        return {};

    if(root->left == nullptr and root->right == nullptr and target == root->val)
        return {{root->val}};

    vector<vector<int>> l_paths = getPaths(root->left, target - root->val);
    vector<vector<int>> r_paths = getPaths(root->right, target - root->val);

    vector<vector<int>> all_paths;

    for(auto i : l_paths)
    {
        i.insert(i.begin(), root->val);
        all_paths.push_back(i);
    }
    for(auto i : r_paths)
    {
        i.insert(i.begin(), root->val);
        all_paths.push_back(i);
    }

    return all_paths;
}

int main()
{
    node* root = new node(5);
    root->left = new node(4);
    root->right = new node(8);
    root->left->left = new node(11);
    root->left->left->left = new node(7);
    root->left->left->right = new node(2);
    root->right->left = new node(13);
    root->right->right = new node(4);
    root->right->right->left = new node(5);
    root->right->right->right = new node(1);

    vector<vector<int>> paths = getPaths(root, 22);

    for(auto i : paths)
    {
        for(int j : i)
            cout << j << "  ";
        cout << endl;
    }
}