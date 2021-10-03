#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

void display_circular_list(node *head)
{
    node *p = head;

    do
    {
        cout << p->val << "\t";
        p = p->next;
    } while (p != head);
    cout << endl;
}

node* delete_from_list(node* head, int target)
{
    node* p = head;
    node* c = head->next;

    while(c->val != target)
    {
        p = c;
        c = c->next;
    }
    //now c will be pointing to target node

    p->next = c->next;
    if(c == head)
        head = head->next;

    return head;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = head;
    display_circular_list(head);

    head = delete_from_list(head, 1);

    display_circular_list(head);
}