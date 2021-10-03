#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node *detectLoop(node *head)
{
    //this funciton will return a node in the loop

    node *s = head;
    node *f = head;

    while (f != nullptr and f->next != nullptr)
    {
        s = s->next;
        f = f->next->next;

        if (s == f)
            return s;
    }
    return nullptr;
}

bool canYouReach(node* from, node* to)
{
    if(from == to)
        return true;
    
    node* p = from->next;
    while(p != from)
    {
        if(p == to)
            return true;
        p = p->next;
    }
    return false;
}

node *deleteLoop(node *head)
{
    node *l = detectLoop(head);
    if (l == nullptr)
        return head;

    node *p = head;
    while (true)
    {
        if(canYouReach(l, p))
            break;
        p = p->next;
    }
    cout << p->val << endl;
    //now p is pointing to start of loop
    // node* tail = p;
    //traverse tail till tail->next != p
    // while(tail->next != p)
        // tail = tail->next;
    //now tail is pointing to last node of the list which is creating loop
    // tail->next = nullptr;
    return head;
}

int main()
{
    node *head = new node(3);
    node* c = head->next = new node(2);
    head->next->next = new node(0);
    head->next->next->next = new node(-4);
    head->next->next->next->next = c;
    
    head = deleteLoop(head);
    // List* l = new List(head);

    // l->display();
}