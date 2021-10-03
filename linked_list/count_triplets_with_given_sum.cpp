#include <bits/stdc++.h>

using namespace std;

struct node
{
    node *prev;
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        prev = nullptr;
        next = nullptr;
    }
    node(node *prev, int val)
    {
        this->prev = prev;
        this->val = val;
        this->next = nullptr;
    }
};

class DList
{
public:
    node *head;
    node *tail;

    DList();

    void append(int val);
    void display();
};
DList::DList()
{
    head = nullptr;
    tail = nullptr;
}

void DList::append(int val)
{
    node *newNode = new node(val);
    if (head == nullptr)
        this->head = this->tail = newNode;
    else
    {
        newNode->prev = this->tail;
        this->tail->next = newNode;
        this->tail = newNode;
    }
}

void DList::display()
{
    node *p = this->head;
    while (p != nullptr)
    {
        cout << p->val << "\t";
        p = p->next;
    }
    cout << endl;
}

int count_pairs(node* low, node* high, int target)
{
    int count = 0;
    while(low->val < high->val)
    {
        if(low->val + high->val == target)
            return 1;
        else if(low->val + high->val > target)
            high = high->prev;
        else
            low = low->next;
    }
    return 0;
}

int count_triplets(DList *l, int target)
{
    node* head = l->head;
    node *p = head;
    int count = 0;
    while (p->next != nullptr)
    {
        int newTarget = target - p->val;
        int pairs = count_pairs(p->next, l->tail, newTarget);
        count += pairs;
        p = p->next;
    }
    return count;
}

int main()
{
    DList *l = new DList();
    l->append(1);
    l->append(2);
    l->append(4);
    l->append(5);
    l->append(6);
    l->append(8);
    l->append(9);

    cout << count_triplets(l, 17) << endl;
}