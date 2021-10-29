#include "tree.h"

node* mergeTrees(node* root1, node* root2)
{
    if(root1 == nullptr and root2 == nullptr)
        return nullptr;
    
    if(root1 == nullptr)
        return root2;
    
    if(root2 == nullptr)
        return root1;

    node* root = new node(root1->val + root2->val);
    root->left = mergeTrees(root1->left, root2->left);
    root->right = mergeTrees(root1->right, root2->right);

    return root;
}

int main()
{
    node* root1 = new node(1);
    root1->left = new node(3);
    root1->right = new node(2);
    root1->left->left = new node(5);

    node* root2 = new node(2);
    root2->left = new node(1);
    root2->right = new node(3);
    root2->left->right = new node(4);
    root2->right->right = new node(7);

    node* root = mergeTrees(root1, root2);

    inorderTraversal(root);
    cout << endl;
}