#include "tree.h"

vector<string> getPaths(node* root)
{
    if(root == nullptr)
        return {};
    
    if(root->left == nullptr and root->right == nullptr)
        return {to_string(root->val)};

    vector<string> left_paths = getPaths(root->left);
    vector<string> right_paths = getPaths(root->right);

    vector<string> f_ans;

    for(string s : left_paths)
        f_ans.push_back(to_string(root->val) + "->" + s);

    for(string s : right_paths)
        f_ans.push_back(to_string(root->val) + "->" + s);

    return f_ans;
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);

    vector<string> v = getPaths(root);

    for(string s : v)
        cout << s << endl;
}



/*
Expectation: return all paths from root to leaf node as vector<string>

Faith: If I call getPaths for smaller inputs (say root->left or root->right) then it already knows how to get ans for those. It will return me paths from root->left to leaf node and from root->right to leaf node;

At the end I'll just add root->val to our smaller paths and return ;

*/