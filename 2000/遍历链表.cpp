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
    int n;
    
    while (cin >> n)
    {
        LinkList head = new LinkNode(-1), p = head;
        
        for (int i = 0; i < n; i ++ ) 
        {
            int x;
            cin >> x;
            p -> next = new LinkNode(x);
            p = p -> next;
        }
        
        for (LinkList p = head -> next; p ; p = p -> next)
        {
            LinkList min = p;
            for (LinkList q = p -> next; q; q = q -> next)
                if (min -> val > q -> val) min = q;
            swap(p -> val, min -> val);
        }
            
        
        while (head -> next)
        {
            cout << head -> next -> val << " ";
            head = head -> next;
        }
        cout << endl;
    }
    
    return 0;
}