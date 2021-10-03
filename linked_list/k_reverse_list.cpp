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
    int length; 

    List()
    {
        head = nullptr;
        length = 0;
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
    length += 1;
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
    node *d = nullptr;
    node *next = nullptr;
    while (head != nullptr)
    {
        next = head->next;
        head->next = d;
        d = head;
        head = next;
    }
    return d;
}
node* k_reverse(node* head, int k)
{
    if(head == nullptr or k == 1)
        return head;

    int count = 0;
    node* p = head;
    while(p != nullptr)
    {
        p = p->next;
        count++;
    }
    node * dummy = new node(0);
    dummy->next = head;
    node* curr = dummy;
    node* nex = dummy;
    node* pre = dummy;

    while(count >= k)
    {
        curr = pre->next;
        nex = curr->next;

        for(int i = 1; i < k; i++)
        {
            curr->next = nex->next;
            nex->next = curr;
            pre->next = nex;
            nex = curr->next;
        }

        pre = curr;
        count -= k;
    }
    return dummy->next;
}
int main()
{
    List * l = new List();
    l->append(1);
    l->append(2);
    l->append(3);
    l->append(4);
    l->append(5);
    l->append(6);
    l->append(7);
    l->append(8);

    l->display();

    node* head = k_reverse(l->getHead(), 3);
    l = new List(head);
    l->display();

}