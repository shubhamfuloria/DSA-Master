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

node* removeDuplicates(node* head)
{
    if(head == nullptr)
        return nullptr;
    
    node* p = head;
    node* q = head->next;

    while(q != nullptr)
    {
        if(p->val == q->val)
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
    return head;
}
int main()
{
    List* l = new List();
    l->append(1);
    l->append(1);
    l->append(2);
    l->display();

    node* head = removeDuplicates(l->getHead());
    l = new List(head);

    l->display();
}