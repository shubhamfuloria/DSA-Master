#include "tree.h"

bool hasPathSum(node* root, int target)
{
    if(root == nullptr)
        return false;
    
    if(root->left == nullptr and root->right == nullptr)
        return target - root->val == 0;

    bool left_ans = hasPathSum(root->left, target - root->val);
    bool right_ans = hasPathSum(root->right, target - root->val);

    return left_ans or right_ans; 
}

int main()
{
    node* root = new node(5);
    root->left = new node(4);
    root->left->left = new node(11);
    root->left->left->left = new node(7);
    root->left->left->right = new node(2);

    root->right = new node(8);
    root->right->left = new node(13);
    root->right->right = new node(4);
    root->right->right->right = new node(1);

    if(hasPathSum(root, 22))
        cout << "Yes, there is a root to leaf path that sum 22" << endl;
    else    
        cout << "Nope, there is no such path to obtain required sum." << endl;
}