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
    int size();
    void removeFirst();
    void addFirst(int val);
    
};
void List::removeFirst()
{
    node* p = head;
    head = head->next;
    delete p;
}
void List::addFirst(int val)
{
    node * p = new node(val, head);
    head = p;
}
int List::size()
{
    node* p = head;
    int len = 0;
    while(p != nullptr)
    {
        len++;
        p = p->next;
    }
    return len;
}
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

void reverseK(List * l1, int k)
{
    List* prev = nullptr;

    while(l1->size() > 0)
    {
        List * curr = new List();

        for(int i = 0; i < k; i)
    }
}
int main()
{
    List * l1 = new List();
    l1->append(1);
    l1->append(2);
    l1->append(3);
    l1->append(4);
    l1->append(5);
    l1->append(6);
    l1->append(7);
    l1->append(8);
    l1->append(9);
    l1->append(10);

    reverseK(l1->getHead(), k)
}