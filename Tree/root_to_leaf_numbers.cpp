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
        f_ans.push_back(to_string(root->val) + s);

    for(string s : right_paths)
        f_ans.push_back(to_string(root->val) + s);

    return f_ans;
}


int getSum(node *root)
{
    vector<string> paths = getPaths(root);
    int sum = 0;
    for(string s : paths)
        sum += stoll(s);
    return sum;    
}
int main()
{
    node *root = new node(1);
    root->right = new node(2);

    cout << getSum(root) << endl;

}