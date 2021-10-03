#include <bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    node *next;

    node(){};
    node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
    node(int val, node *next)
    {
        this->val = val;
        this->next = next;
    }
};

class List
{
private:
    node *head;

public:
    List()
    {
        head = nullptr;
    }
    List(node *head_)
    {
        head = head_;
    }
    void append(int val);
    void display();
    node *getHead();
    void setHead(node *newHead);
};

node *List::getHead()
{
    return head;
}
void List::setHead(node *newHead)
{
    head = newHead;
}

void List::append(int val)
{
    node *newNode = new node(val);
    if (head == nullptr)
        head = newNode;

    else
    {
        node *temp = head;

        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
    }
}

void List::display()
{
    node *temp = head;
    if (temp == nullptr)
    {
        cout << "List is Empty !" << endl;
        return;
    }

    while (temp != nullptr)
    {
        cout << temp->val << "\t";
        temp = temp->next;
    }
    cout << endl;
}

bool detectLoop(node* head)
{
    node* s = head;
    node* f = head;


    while(f != nullptr and f->next != nullptr)
    {
        s = s->next;
        f = f->next->next;

        if(s == f)
            return true;
    }

    return false;
}

int main()
{
    node* head = new node(1);
    head->next = new node(2);
    node* c = head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = c;

    List *l = new List(head);

    if(detectLoop(head))
        cout << "Yes!" << endl;
    else 
        cout << "No!" << endl;
}