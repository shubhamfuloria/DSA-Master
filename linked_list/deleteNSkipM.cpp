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
node* List::getTail()
{
    node* p = head;

    while(p->next != nullptr)
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

node* retainMDeleteN(node* head, int M, int N)
{
    node* p = head;

    while(p)
    {
        //retain M nodes
        for(int i = 0; i < M - 1 and p != nullptr; i++)
            p = p->next;
        
        node* prev_ptr = p;
        if(!p)  break;
        p = p->next;

        //delete N nodes

        for(int i = 0; i < N and p != nullptr; i++)
            p = p->next;
        
        prev_ptr->next = p;
    }
    return head;
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
    l->append(9);
    l->append(10);

    l->display();

    node* head = retainMDeleteN(l->getHead(), 3, 2);
    l = new List(head);

    l->display();

}