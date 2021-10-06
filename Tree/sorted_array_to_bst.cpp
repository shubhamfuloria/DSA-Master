#include "tree.h"

node* getBST(vector<int> A, int low, int high)
{
    if(low > high)
        return nullptr;

    int mid = (low + high) / 2;
    node* root = new node(A[mid]);

    root->left = getBST(A, low, mid - 1);
    root->right = getBST(A, mid + 1, high);

    return root;
}

void inorder_traversal(node* root)
{
    if(root == nullptr)
        return;
    
    inorder_traversal(root->left);
    cout << root->val << " ";
    inorder_traversal(root->right);
}

int main()
{
    vector<int> A = {-10, -3, 0, 5, 9};
    node* root = getBST(A, 0, A.size() - 1);

    inorder_traversal(root);
    cout << endl;
}


/*
Expectation: to get a complete binary Search tree.

Establising the faith : Keep faith in recursive function that it already knows how to build bst *for smaller inputs
SO I can create root node by myself
left subtree will be solved by my recursion
right subtree will also be solved by my recursion

*/