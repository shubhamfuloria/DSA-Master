#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node *reverse(node *head)
{
    if (head == nullptr or head->next == nullptr)
        return head;

    //p: prev, c: current, n: next

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

node* add_ll(node* head1, node* head2)
{

    if(!head1)
        return head2;
    
    if(!head2)
        return head1;


    head1 = reverse(head1);
    head2 = reverse(head2);
    node* head3 = nullptr;

    node* p1 = head1;
    node* p2 = head2;
    node* p3 = head3;

    int rem = 0;
    node* newNode = nullptr;
    while(p1 and p2)
    {
        int sum = p1->val + p2->val + rem;

        if(sum < 10)
            rem = 0, newNode = new node(sum);
        
        else
            rem = sum / 10, newNode = new node(sum % 10);

        
        if (head3 == nullptr)
            head3 = p3 = newNode;
        else
            p3->next = newNode;

        p3 = newNode;
        p1 = p1->next;
        p2 = p2->next;
    }
    while(p1)
    {
        int sum = p1->val + rem;

        if(sum < 10)
            rem = 0, newNode = new node(sum);
        else
            rem = sum / 10, newNode = new node(sum % 10);
        
        p3->next = newNode;
        p3 = newNode;
        p1 = p1->next;
    }

    while(p2)
    {
        int sum = p2->val + rem;

        if (sum < 10)
            rem = 0, newNode = new node(sum);
        else
            rem = sum / 10, newNode = new node(sum % 10);

        p3->next = newNode;
        p3 = newNode;
        p1 = p1->next;
    }

    if(rem != 0)
    {
        node* newNode = new node(rem);
        p3->next = newNode;
    }

    head3 = reverse(head3);

    return head3;
}

int main()
{
    List* l1 = new List();
    List* l2 = new List();

    l1->append(7);
    l1->append(5);
    l1->append(9);
    l1->append(4);
    l1->append(6);

    l2->append(8);
    l2->append(4);

    node* head = add_ll(l1->getHead(), l2->getHead());

    List* l3 = new List(head);

    l3->display();
}
