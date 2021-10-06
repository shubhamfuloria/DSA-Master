#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;

    node(int value)
    {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};