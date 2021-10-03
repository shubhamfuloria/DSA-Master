#include<bits/stdc++.h>
#include "linked_list.h"

using namespace std;

bool isPallindrom(node* head)
{
    stack<int>st;

    node* p = head;

    while(p != nullptr)
    {
        st.push(p->val);
        p = p->next;
    }
    p = head;

    while(p != nullptr and st.empty() == false)
    {
        if(p->val != st.top())
            return false;
        p = p->next;
        st.pop();
    }
    if(st.empty())
        return true;
    return false;
}

int main()
{
    List* l = new List();
    l->append(1);
    l->append(2);
    l->append(1);
    l->append(2);

    cout << isPallindrom(l->getHead()) << endl;
}