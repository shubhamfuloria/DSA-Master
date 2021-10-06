#include "tree.h"

bool solve(node *p, node *q)
{
    if (!p and !q) //p and q both are null
        return true;

    if (!p or !q) //either p or q is null
        return false;

    bool isRootMirror = p->val == q->val;
    bool isLeftSubtreeMirror = solve(p->left, q->right);
    bool isRightSubtreeMirror = solve(p->right, q->left);

    return isRootMirror and isLeftSubtreeMirror and isRightSubtreeMirror;

    // return p->val == q->val and solve(p->left, q->right) and solve(p->right, q->left);
}
bool isSymmetric(node *root)
{
    return solve(root->left, root->right);
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(2);
    root->right->left = new node(4);
    root->right->right = new node(3);
    root->left->left = new node(3);
    root->left->right = new node(4);

    if(isSymmetric(root))
        cout << "This is a symmetric tree :)" << endl;
    else 
        cout << "It's not a symmetric tree :| " << endl;
}


/*
Expectation : Function will return if the tree is symmetric or not. (A tree is symmetric only if both (left and right) subtrees are mirror image of each others);

Establishing Faith: I'll keep a strong faith in my recursive calls (It already knows how to run the function for left and right subtree. So if left and right subtree are mirror image of each other and root is same then our function will return true else false. 

*/