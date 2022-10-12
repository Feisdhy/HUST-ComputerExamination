#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct LinkNode
{
    int val;
    struct LinkNode *next;
    
    LinkNode(int val_): val(val_), next(NULL) {}
}*LinkList;

int main()
{
    int x;
    LinkList head = new LinkNode(-1), p = head, max = head;
    
    while (cin >> x, x)
    {
        p -> next = new LinkNode(x);
        if (max -> next -> val < p -> next -> val) max = p;
        p = p -> next;
    }
    
    max -> next = max -> next -> next;
    
    while (head -> next)
    {
        cout << head -> next -> val << " ";
        head = head -> next;
    }
    
    return 0;
}