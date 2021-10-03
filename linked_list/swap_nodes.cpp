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

node *swap(List *l, int x, int y)
{
    if (x == y)
        return nullptr;

    //searching for x node
    node *head = l->getHead();
    node *prev_x = nullptr;
    node *curr_x = head;

    while (curr_x != nullptr and curr_x->val != x)
    {
        prev_x = curr_x;
        curr_x = curr_x->next;
    }

    //searching for y node
    node *prev_y = nullptr;
    node *curr_y = head;

    while (curr_y != nullptr and curr_y->val != y)
    {
        prev_y = curr_y;
        curr_y = curr_y->next;
    }

    if(curr_y == nullptr or curr_x == nullptr)
        return head;

    if(prev_x != nullptr) //x is not head  
        prev_x->next = curr_y;
    else //x is head
        head = curr_y;
    
    if(prev_y != nullptr) //y is not head
        prev_y->next = curr_x;
    else //y is head
        head = curr_x;

    //swapping next pointers of nodes
    node* temp = curr_x->next;
    curr_x->next = curr_y->next;
    curr_y->next = temp;

    return head;
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
    l->append(8);
    l->append(9);
    l->append(10);

    l->display();
    node* Head = swap(l, 3, 6);
    l = new List(Head);

    l->display();
}