#include<bits/stdc++.h>
#include "linked_list.h"

using namespace std;

void display_circular_list(node* head)
{
    node* p = head;

    do
    {
        cout << p->val << "\t";
        p = p->next;
    }while(p != nullptr);
    cout << endl;
}

int main()
{
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = head;

    display_circular_list(head);


}