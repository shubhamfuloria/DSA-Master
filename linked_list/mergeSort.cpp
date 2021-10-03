#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

node* merge(node* l1, node* l2)
{
    if(!l1 and !l2)
        return nullptr;
    if(!l1)
        return l2;
    if(!l2)
        return l1;
    
    node* head = nullptr;
    node* tail = nullptr;

    //initial step
    if(l1->val < l2->val)
    {
        head = tail = l1;
        l1 = l1->next;
        tail->next = nullptr;
    }
    else
    {
        head = tail = l2;
        l2 = l2->next;
        tail->next = nullptr;
    }

    //looping step
    while(l1 and l2)
    {
        if(l1->val < l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
            tail = tail->next;
            tail->next = nullptr;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
            tail = tail->next;
            tail->next = nullptr;
        }
    }
    if(l1 != nullptr)
        tail->next = l1;
    if(l2 != nullptr)
        tail->next = l2;

    return head;
}
node* getMid(node* head, node* tail)
{
    node* fast = head;
    node* slow = head;

    while(fast != tail and fast->next != tail)
        fast = fast->next->next, slow = slow->next;
    
    return slow;
}

node* mergeSort(node* head, node* tail)
{
    if(head == tail)
    {
        List * p = new List();
        p->append(head->val);
        return p->getHead();
    }

    node* mid = getMid(head, tail);
    node* firstHalf = mergeSort(head, mid);
    node* secondHalf = mergeSort(mid->next, tail);

    return merge(firstHalf, secondHalf);
}




int main()
{
    int x;
    x = (int)NULL;
    cout << x << endl;
}