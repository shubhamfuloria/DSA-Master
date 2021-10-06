#include "tree.h"

bool isSameTree(node* p, node* q)
{

    if(!p and !q)
        return true;
    
    if(!p or !q)
        return false;

    bool isLeftSubTreeSame = isSameTree(p->left, q->left);
    bool isRightSubTreeSame = isSameTree(p->right, q->right);
    bool isRootSame = p->val == q->val;

    return isLeftSubTreeSame and isRightSubTreeSame and isRootSame;
}

int main()
{
    node *p = new node(10);
    p->left = new node(20);
    p->right = new node(30);
    p->left->left = new node(40);
    p->left->right = new node(50);
    p->right->left = new node(60);
    p->right->right = new node(70);
    p->right->right->right = new node(80);
    p->right->right->right->left = new node(90);
    p->right->right->right->right = new node(100);

    node *q = new node(10);
    q->left = new node(20);
    q->right = new node(30);
    q->left->left = new node(40);
    q->left->right = new node(50);
    q->right->left = new node(60);
    q->right->right = new node(70);
    q->right->right->right = new node(80);
    q->right->right->right->left = new node(90);
    q->right->right->right->right = new node(100);

    if(isSameTree(p, q))
        cout << "Yes! they are same tree :)" << endl;
    else
        cout << "Nope! they aren't same :| " << endl;
}

/*
High Level Thinking : 
I'll establish faith in my recursive call, it already knows how to perform it's duty, if I call it for a smaller problem
Faith should be unbreakable


if leftSubTree and rightSubTree and root are same then return true . That's it !
*/