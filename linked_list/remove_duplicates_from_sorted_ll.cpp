#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

void remove_duplicates(node* head)
{
    if(head == nullptr or head->next == nullptr)
        return;

    node* p = head;
    node* c = head->next;

    while(c != nullptr)
    {
        if(p->val == c->val)
        {
            p->next = c->next;
            node* t = c;
            c = c->next;
            delete t;
        }
        else
        {
            p = c;
            c = c->next;
        }
    }
}

int main()
{
    List *l = new List();
    l->append(2);
    l->append(2);
    l->append(3);
    l->append(3);
    l->append(4);
    l->append(5);

    l->display();
    remove_duplicates(l->getHead());

    l->display();
}