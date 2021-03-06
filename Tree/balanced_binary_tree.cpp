#include "tree.h"

int getHeight(node *root)
{
    if (root == nullptr)
        return 0;

    int left_height = getHeight(root->left);
    int right_height = getHeight(root->right);

    return max(left_height, right_height) + 1;
}

bool isBalanced(node *root)
{
    if (root == nullptr)
        return true;

    int left_height = getHeight(root->left);
    int right_height = getHeight(root->right);

    bool curr_node_ans = abs(left_height - right_height) <= 1;

    if(curr_node_ans == false)   return false; //to reduce complexity

    bool left_tree_ans = isBalanced(root->left);
    bool right_tree_ans = isBalanced(root->right);

    return curr_node_ans and left_tree_ans and right_tree_ans;
}

int main()
{
    node *root = new node(1);
    root->right = new node(2);

    if (isBalanced(root))
        cout << "YES ! It is a balanced binary tree." << endl;
    else
        cout << "NOPE! It is not a balanced binary tree." << endl;
}