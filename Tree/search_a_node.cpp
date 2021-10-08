#include "tree.h"

bool isPresent(node* root, node* target)
{
    if(root == nullptr)
        return false;
    
    if(root == target)
        return true;
    
    bool l_tree = isPresent(root->left, target);
    if(l_tree) return true;

    bool r_tree = isPresent(root->right, target);
    if(r_tree)  return true;

    return false;
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    node* target = root->left->right = new node(5);
    root->right->right = new node(6);

    // target = new node(10);

    if(isPresent(root, target))
        cout << "Yes it is present" << endl;    
    else 
        cout << "It's not present" << endl;
}