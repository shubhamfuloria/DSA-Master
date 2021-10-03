#include<bits/stdc++.h>

using namespace std;

struct node
{
    node* prev;
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        prev = nullptr;
        next = nullptr;
    }
    node(node* prev, int val)
    {
        this->prev = prev;
        this->val = val;
        this->next = nullptr;
    }
};

class DList
{
public: 
    node* head;
    node* tail;

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
    node* newNode = new node(val);
    if(head == nullptr)
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
    node* p = this->head;
    while(p != nullptr)
    {
        cout << p->val << "\t";
        p = p->next;
    }
    cout << endl;

}
void display_(node* head)
{
    node *p = head;
    while (p != nullptr)
    {
        cout << p->val << "\t";
        p = p->next;
    }
    cout << endl;
}

void display_rev(node* tail)
{
    node* p = tail;
    while(p != nullptr)
    {
        cout << p->val << "\t";
        p = p->prev;
    }
    cout << endl;
}

node* reverse(node* head)
{
    node* c = head;
    node* temp = nullptr;
    while(c != nullptr)
    {
        temp = c->prev;
        c->prev = c->next;
        c->next = temp;
        c = c->prev;
    }

    return temp->prev;
}

int main()
{
    DList* l = new DList();
    l->append(5);
    l->append(10);
    l->append(12);
    l->append(20);
    l->append(23);

    l->display();

    node* head = reverse(l->head);

    display_(head);



}