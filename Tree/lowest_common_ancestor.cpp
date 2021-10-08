#include "tree.h"


node* lowest_common_ancestor(node* root, node* p, node* q)
{
    node* t = p;

    if(p->val > q->val)
    {
        q = t;
        t = q;
    }
    node* curr = root;
    while(curr != nullptr)
    {
        if(p->val < curr->val and q->val > curr->val)
            return curr;
        
        else if(p->val > curr->val)
            curr = curr->right;
        
        else
            curr = curr->left;
    }
    return nullptr;

}

int main()
{
    node* root = new node(6);
    node* p = root->left = new node(2);
    node* q = root->right = new node(8);
    root->left->left = new node(0);
    root->left->right = new node(4);
    root->left->right->left = new node(3);
    root->left->right->right = new node(5);

    root->right->left = new node(7);
    root->right->right = new node(9);

    node* lca = lowest_common_ancestor(root, p, q);
    cout << lca->val << endl;
}