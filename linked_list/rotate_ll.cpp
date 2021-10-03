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
    node *getTail();
    void setHead(node *newHead);
};

node *List::getHead()
{
    return head;
}
node *List::getTail()
{
    node *p = head;

    while (p->next != nullptr)
        p = p->next;

    return p;
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
node* rotateByOne(node* head)
{
    if(head == nullptr or head->next == nullptr)
        return head;

    node* newHead = head->next;
    node* p = head->next;
    head->next = nullptr;
    //search the tail
    while(p->next != nullptr)
        p = p->next;
    
    p->next = head;
    return newHead;
}
node* rotate(node* head, int k)
{
    for(int i = 0; i < k; i++)
        head = rotateByOne(head);
    
    return head;
}

int main()
{   
    List * l = new List();
    l->append(2);
    l->append(4);
    l->append(7);
    l->append(8);
    l->append(9);

    l->display();

    node* head = rotate(l->getHead(), 5);
    l = new List(head);
    l->display();
}