#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct BiNode
{
    int val;
    struct BiNode *lchild, *rchild;
    
    BiNode(int val_): val(val_), lchild(NULL), rchild(NULL) {};
}*BiTree;

void insert(BiTree root, int x)
{
    if (root -> val > x && root -> lchild) insert(root -> lchild, x);
    else if (root -> val < x && root -> rchild) insert(root -> rchild, x);
    else if (root -> val > x && !root -> lchild) 
        root -> lchild = new BiNode(x), cout << root -> val << endl;
    else root -> rchild = new BiNode(x), cout << root -> val << endl;
}

/*void insert(int x)
{
    if (root -> val == -1) root -> val = x, puts("-1");
    else
    {
        int dir = 0;
        BiNode *p = root, *q =root;
        
        while (p)
        {
            if (p != q) q = p;
            if (p -> val > x) p = p -> lchild, dir = 0;
            else p = p -> rchild, dir = 1;
        }
        
        printf("%d\n", q -> val);
        
        if (!dir) q -> lchild = new BiNode(x);
        else q -> rchild = new BiNode(x);
    }
}*/

int main()
{
    BiTree root = new BiNode(-1);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i ++ )
    {
        int x;
        cin >> x;
        
        if (!i) root -> val = x, puts("-1");
        else insert(root, x);
    }
    
    return 0;
}