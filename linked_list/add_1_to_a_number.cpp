#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node *reverse(node *head)
{
    if (head == nullptr or head->next == nullptr)
        return head;

    node *p = nullptr;
    node *c = head;
    node *n = nullptr;

    while (c != nullptr)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}

node *addOne(node *head)
{
    head = reverse(head);
    node *p = head;
    //now p is pointing to last node
    int c = 0;
    int rem = 1;
    node* prev = nullptr;
    while (p != nullptr)
    {
        int sum = p->val + rem;

        if (sum < 10)
            rem = 0, p->val = sum;
        else //there can only be one case when sum < 10 : sum will be 10
            rem = 1, p->val = 0;
        prev = p;
        p = p->next;
    }
    if(rem != 0)
    {
        node* newNode = new node(rem);
        prev->next = newNode;
    }
    head = reverse(head);
    return head;
}

int main()
{
    List *l = new List();
    l->append(9);
    l->append(9);
    l->append(9);

    l->display();

    node* head = addOne(l->getHead());
    l = new List(head);
    l->display();
}