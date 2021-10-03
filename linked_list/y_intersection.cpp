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
    node* tail;
    List()
    {
        head = nullptr;
        tail = nullptr;
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
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
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

int intersectPoint(node *head1, node *head2)
{
    struct node *temp1 = head1;
    struct node *temp2 = head2;
    int count1 = 0;
    int count2 = 0;
    while (temp1 != NULL)
    {
        count1++;
        temp1 = temp1->next;
    }
    while (temp2)
    {
        count2++;
        temp2 = temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
    int diff = abs(count2 - count1);
    int count = 0;
    while (count < diff)
    {
        if (count1 < count2)
        {
            temp2 = temp2->next;
            // count++;
        }
        else
        {
            temp1 = temp1->next;
            // count++;
        } // its self explanatory count2<count1;
        count++;
    }
    //now both temp1 and temp2 are at same posiotion like same length
    while (temp1 != temp2)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1->val;
}
int main()
{
    node* head1 = new node(3);
    head1->next = new node(6);
    head1->next->next = new node(9);

    node* head2 = new node(10);
    
    node* c_head = new node(15);
    c_head->next = new node(30);

    //merging list;
    head1->next->next->next = c_head;
    head2->next = c_head;

    List* l1 = new List(head1);
    List* l2 = new List(head2);

    l1->display();
    l2->display();

    cout <<  intersectPoint(head1, head2) << endl;


}