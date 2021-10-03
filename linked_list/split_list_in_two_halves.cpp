#include<bits/stdc++.h>
#include "linked_list.h"

using namespace std;

void split(node* head, node* &head1, node* &head2)
{
    node* s = head;
    node* f = head;

    while(f->next != head and f->next->next != head)
    {
        f = f->next->next;
        s = s->next;
    }

    //now fast may be pointing to pre tail node or tail node 
    head2 = nullptr;
    head1 = head;
    if(f->next != head)
        f = f->next;

    head2 = s->next;
    f->next = head2;
    s->next = head1;
}

void displayCyclicList(node* head)
{
    node* p = head;

    while(p->next != head)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << p->val << endl;
}

int main()
{
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = head;

    node* head1 = nullptr;
    node* head2 = nullptr;

    split(head, head1, head2);

    displayCyclicList(head1);
    displayCyclicList(head2);

    // List* l1 = new List(head1);
    // l1->display();
    // List* l2 = new List(head2);
    // l2->display();

}