#include<bits/stdc++.h>
#include "linked_list.h"

using namespace std;

void splitList(node* head, node** head1_ref, node** head2_ref)
{
    struct node* slow = head;
    struct node *fast = head->next; // or fast = head->next;
    while (fast != head and fast->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct node *head2 = slow->next;
    struct node *temp = head2;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next == NULL;
    slow->next == NULL;
    *head1_ref = head;
    *head2_ref = head2;
}

void display_circular_list(node* head)
{
    do
    {
        cout << head->val << " "; 
        head = head->next;
    } while (head->next != head);
    cout << endl;
    
}

int main()
{
    node* head = new node(1);
    head->next = new node(5);
    head->next->next = new node(7);
    head->next->next->next = head;

    node* head1 = nullptr;
    node* head2 = nullptr;

    splitList(head, &head1, &head2);

    display_circular_list(head1);
    display_circular_list(head2);


 
}