#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

node* deleteNode(node* head, int x)
{

    if (x = 1)
    {
        head = head->next;
            return head;
    }
    int count = 1;
    node *temp = head;
    node *prev = NULL;

    while (temp)
    {
        if (count == x)
        {
            prev->next = temp->next;
            free(temp);
            break;
        }
        else
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
    }
    return head;
}

int main()
{
    List *l = new List();
    l->append(1);
    l->append(2);
    l->append(3);
    l->append(4);
    l->append(5);
    l->append(6);

    node* head = deleteNode(l->getHead(), 2);

    l = new List(head);
    l->display();




}