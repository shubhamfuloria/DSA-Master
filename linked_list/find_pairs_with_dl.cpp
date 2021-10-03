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

pair<int, int> getPair(DList* l, int target)
{
    node* low = l->head;
    node* high = l->tail;

    while(low != high)
    {
        if(low->val + high->val == target)
            return {low->val, high->val};

        else if(low->val + high->val > target)
            high = high->prev;
        
        else
            low = low->next;
    }
    return {};
}

int main()
{
    DList *l = new DList();

    l->append(1);
    l->append(2);
    l->append(3);
    l->append(4);
    l->append(5);
    l->append(6);
    l->append(7);
    l->append(8);
    l->append(9);

    pair<int, int> p = getPair(l, 7);
    cout << p.first << "\t" << p.second << endl;
}