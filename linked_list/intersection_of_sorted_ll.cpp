#include<bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node* intersect(node* head1, node* head2)
{
    node* p = head1;
    node* q = head2;
    node* head = nullptr;
    node* r = nullptr;
    while(p and q)
    {
        if(p->val == q->val)
        {
            node* newNode = new node(p->val);
            if(head == nullptr)
                head = r = newNode;
            else
                r->next = newNode;
            r = newNode;

            p = p->next;
            q = q->next;
        }
        else
        {
            if(p->val < q->val)
                p = p->next;
            else
                q = q->next;
        }
    }
    return head;
}

int main()
{
    List* l1 = new List();
    l1->append(1);
    l1->append(2);
    l1->append(3);
    l1->append(4);
    l1->append(6);

    List* l2 = new List();
    l2->append(2);
    l2->append(4);
    l2->append(6);
    l2->append(8);

    node* head = intersect(l1->getHead(), l2->getHead());

    List* l3 = new List(head);

    l3->display();
}