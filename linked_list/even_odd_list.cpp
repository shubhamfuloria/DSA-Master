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

List* even_odd(node* head)
{
    List* evenList = new List();
    List* oddList = new List();

    node* p = head;

    while(p != nullptr)
    {
        if(p->val % 2 == 0)
            evenList->append(p->val);
        else
            oddList->append(p->val);
        
        p = p->next;
    }
    node* tail = evenList->getTail();
    tail->next = oddList->getHead();

    return evenList;
}

int main()
{
    List *l1 = new List();
    l1->append(17);
    l1->append(15);
    l1->append(8);
    l1->append(12);
    l1->append(10);
    l1->append(5);
    l1->append(4);
    l1->append(1);
    l1->append(7);
    l1->append(6);

    l1->display();

    List * ans = even_odd(l1->getHead());
    ans->display();
}