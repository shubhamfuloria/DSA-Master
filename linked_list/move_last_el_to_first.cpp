#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node *moveLastToFirst(node *head)
{
    if (head == nullptr or head->next == nullptr)
        return head;

    node *p = nullptr;
    node *c = head;

    while (c->next != nullptr)
    {
        p = c;
        c = c->next;
    }

    //now c will be pointing to tail node
    //and p will be pointing to pre tail node
    p->next = nullptr;
    c->next = head;
    head = c;
    return head;
}
int main()
{
    List *l = new List();
    l->append(1);
    l->append(2);
    l->append(3);
    l->append(4);
    l->append(5);

    l->display();
    node *head = moveLastToFirst(l->getHead());
    l = new List(head);
    l->display();
}