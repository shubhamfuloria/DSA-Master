#include<bits/stdc++.h>
#include "linked_list.h"
using namespace std;

void remove_duplicates(node* head)
{
    if(head == nullptr or head->next == nullptr)
        return;

    unordered_map<int, int>umap;

    node* p = nullptr;
    node* c = head;

    while(c != nullptr)
    {
        if(umap[c->val] == 1) //this val is already present in the list
        {
            p->next = c->next;
            node* temp = c;
            c = c->next;
            delete temp;
        }
        else
        {
            umap[c->val] = 1;
            p = c;
            c = c->next;
        }
    }
}

int main()
{
    List* l = new List();
    l->append(2);
    l->append(5);
    l->append(2);
    l->append(3);
    l->append(3);
    l->append(5);
    l->append(6);

    l->display();

    remove_duplicates(l->getHead());

    l->display();

}