#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node *getIntersectionNode(node *headA, node *headB)
{

    if (headA == nullptr or headB == nullptr)
        return nullptr;

    node *p = headA;
    node *q = headB;

    while (true)
    {
        p = p->next;
        q = q->next;

        if (p == nullptr and q == nullptr)
            return nullptr;

        if (p == nullptr)
            p = headB;
        if (q == nullptr)
            q = headA;

        if (p == q)
            return p;
    }
    return nullptr;
}

int main()
{

    // node *head1 = new node(3);
    // head1->next = new node(6);
    // head1->next->next = new node(9);
    // node *c = head1->next->next->next = new node(15);
    // head1->next->next->next->next = new node(30);

    // node *head2 = new node(10);
    // head2->next = c;

    // List *l1 = new List(head1);
    // List *l2 = new List(head2);

    List* l1 = new List();
    l1->append(2);
    l1->append(6);
    l1->append(4);

    List* l2 = new List();
    l2->append(1);
    l2->append(5);

    node* ans = getIntersectionNode(l1->getHead(), l2->getHead());
    if(ans)
        cout << ans->val << endl;
    else
        cout << "NO INTERSECTION POINT!" << endl;
}