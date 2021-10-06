#include "tree.h"

vector<int> inorderTraversal(node* root)
{
    stack<node*>stk;
    node* curr = root;
    vector<int> r;
    while (true)
    {
        if(curr != nullptr)
        {
            stk.push(curr);
            curr = curr->left;
        }
        else
        {
            if(stk.empty()) break;
            r.push_back(stk.top()->val);
            curr = stk.top()->right;
            stk.pop();
        }
    }
    return r;
    

}

int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    head->left->right = new node(50);
    head->right->left = new node(60);
    head->right->right = new node(70);
    head->right->right->right = new node(80);
    head->right->right->right->left = new node(90);
    head->right->right->right->right = new node(100);

    vector<int> inorder = inorderTraversal(head);

    for(auto i : inorder)
        cout << i << " ";
    cout << endl;
}