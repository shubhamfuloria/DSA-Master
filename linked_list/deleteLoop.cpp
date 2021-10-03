#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node* delete_loop(node* head)
{
    unordered_map<node*, int>u_map;

    node* s = head;
    node* l = nullptr;
    while(true)
    {

        if(u_map[s] == 1)
        {
            l = s;
            break;
        }
        u_map[s] = 1;
        s = s -> next;
    }   
    //now l will be pointing to looped node
    node* p = l;
    while(p->next != s)
        p = p->next;
    
    p->next = nullptr;
    return head;
}


int main()
{
    node *head = new node(1);
    head->next = new node(2);
    node *c = head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = c;

    head = delete_loop(head);

    List* l = new List(head);
    l->display();
}