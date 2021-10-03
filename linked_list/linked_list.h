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

node *mergeTwoLists(node *l1, node *l2)
{

    if (!l1 and !l2)
        return nullptr;
    if (!l1)
        return l2;
    if (!l2)
        return l1;

    node *head = nullptr;
    node *tail = nullptr;

    //initial step

    if (l1 != nullptr && l2 != nullptr)
    {
        if (l1->val < l2->val)
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
    }
    //looping step

    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            tail = l1;
            l1 = l1->next;
            tail->next = nullptr;
        }
        else
        {
            tail->next = l2;
            tail = l2;
            l2 = l2->next;
            tail->next = nullptr;
        }
    }

    if (l1)
        tail->next = l1;
    if (l2)
        tail->next = l2;

    return head;
}

int getLength(node *head)
{
    int len = 0;

    node *temp = head;

    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
