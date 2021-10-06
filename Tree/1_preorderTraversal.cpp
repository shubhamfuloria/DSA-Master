#include "tree.h"

vector<int> preorderTraversal(node *head)
{
    stack<node*> stk;
    stk.push(head);
    vector<int> r;
    while(stk.empty() == false)
    {
        node* curr_node = stk.top();
        r.push_back(curr_node->val);    
        stk.pop();

        if(curr_node->right != nullptr) stk.push(curr_node->right);
        if(curr_node->left != nullptr)  stk.push(curr_node->left);
    }

    return r;
}


int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->left->right = new node(60);
    head->right = new node(30);
    head->left->left = new node(40);
    head->right->left = new node(50);
    head->right->right = new node(70);

    vector<int> A = preorderTraversal(head);

    for(auto i : A)
        cout << i << " ";
    cout << endl;
}

/*
Hight Level Thinking: 
Establish the faith in your recursive calls, that it already knows the solution of our question.
If I call preorderTraversal(head->left) => it will print left subtree in preorder form (idk how)
and same goes for preorderTraversal(head->right) 
inbetween recursive calls I will just print the head, and will get my answer 

*/