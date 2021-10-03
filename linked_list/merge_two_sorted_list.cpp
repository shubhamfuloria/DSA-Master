#include<bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node* merge(node* p, node* q)
{
    node* p1 = nullptr, *c1 = p;
    node* p2 = nullptr, *c2 = q;
    node* head = nullptr;
    while(c1 and c2)
    {

    }
}

int main()
{
    List* l1 = new List();
    l1->append(5);
    l1->append(10);
    l1->append(15);
    l1->append(40);

    List* l2 = new List();
    l2->append(2);
    l2->append(3);
    l2->append(20);

    node* head = merge(l1->getHead(), l2->getHead());
}