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

node *reverse(node *head)
{
    if (head == nullptr or head->next == nullptr)
        return head;

    node *c = head;
    node *p = nullptr;
    node *n = head->next;

    while (n != nullptr)
    {
        c->next = p;
        p = c;
        c = n;
        n = n->next;
    }
    //now current will be pointing to last node
    c->next = p;
    return c;
}

node *KReverse(node *head, int k)
{
    int count = 0;
    auto p = head;

    while (p != nullptr)
        count++, p = p->next;

    node *p = nullptr;
    node *c = head;
    node *n = nullptr;
    node *p_tail = nullptr;
    node *n_tail = c;

    while (count >= k)
    {

        for (int i = 0; i < k; i++)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        if(p_tail != nullptr)
            p_tail->next = p;

        p_tail = n_tail;
        n_tail = c;
        p = nullptr;
        count -= k;
    }
    n

}

int main()
{
    List *l = new List();
    l->append(1);
    l->append(2);
    l->append(3);
    l->append(4);
    l->append(5);
    l->append(6);
    l->append(7);

    l->display();

    node *head = reverse(l->getHead());
    l = new List(head);

    l->display();
}