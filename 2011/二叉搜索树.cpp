#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct BiNode
{
    string val;
    struct BiNode *lchild, *rchild;
    
    BiNode(string val_): val(val_), lchild(NULL), rchild(NULL) {}
}*BiTree;

void show(BiTree root)
{
    if (!root) return;
    else
    {
        cout << root -> val << endl;
        show(root -> lchild);
        show(root -> rchild);
    }
}

int cmp(string a, string b)
{
    if (a == b) return 0;
    else if (a > b) return 1;
    else return -1;
}

BiTree insert(BiTree root, string s)
{
    if (!root)
    {
        BiTree node = new BiNode(s);
        return node;
    }
    else if (root -> val == "")
    {
        root -> val = s;
        return root;
    }
    else
    {
        int judge = cmp(root -> val, s);
        
        if (!judge) return root;
        else if (judge == 1) root -> lchild = insert(root -> lchild, s);
        else root -> rchild = insert(root -> rchild, s);
        return root;
    }
}

int main()
{
    string s;
    BiTree root = new BiNode("");
    
    while (cin >> s) insert(root, s);
    
    show(root);
    
    return 0;
}