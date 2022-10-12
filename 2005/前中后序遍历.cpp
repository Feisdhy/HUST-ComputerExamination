#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct BiNode
{
    int val;
    struct BiNode *lchild, *rchild;
    
    BiNode(int val_): val(val_), lchild(NULL), rchild(NULL) {}
}*BiTree;

void insert(BiTree root, int x)
{
    if (root -> val == x) return;
    else if (root -> val > x && root -> lchild) insert(root -> lchild, x);
    else if (root -> val < x && root -> rchild) insert(root -> rchild, x);
    else if (root -> val > x && !root -> lchild) root -> lchild = new BiNode(x);
    else root -> rchild = new BiNode(x);
}

/*BiTree insert(BiTree root, int x)
{
    if (!root) 
    {
        BiTree node = new BiNode(x);
        return node;
    }
    else
    {
        if (root -> val > x) root -> lchild = insert(root -> lchild, x);
        else if (root -> val < x) root -> rchild = insert(root -> rchild, x);
        return root;
    }
}*/

void show_front(BiTree root)
{
    if (!root) return;
    else
    {
        cout << root -> val << " ";
        show_front(root -> lchild);
        show_front(root -> rchild);
    }
}

void show_in(BiTree root)
{
    if (!root) return;
    else
    {
        show_in(root -> lchild);
        cout << root -> val << " ";
        show_in(root -> rchild);
    }
}

void show_rear(BiTree root)
{
    if (!root) return;
    else
    {
        show_rear(root -> lchild);
        show_rear(root -> rchild);
        cout << root -> val << " ";
    }
}

int main()
{
    int n;
    
    while (cin >> n)
    {
        int x;
        BiTree root = new BiNode(-1);
        
        for (int i = 0; i < n; i ++ )
        {
            cin >> x;
            if (i == 0) root -> val = x;
            else insert(root, x);
        }
        
        show_front(root); puts("");
        show_in(root);  puts("");
        show_rear(root); puts("");
    }
    
    return 0;
}