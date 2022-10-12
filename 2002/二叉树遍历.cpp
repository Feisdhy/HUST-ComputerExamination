#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct BiNode
{
    char val;
    struct BiNode *lchild, *rchild;
    
    BiNode(char val_): val(val_), lchild(NULL), rchild(NULL) {}
}*root;

string preorder, inorder;

BiNode* dfs(int l1, int r1, int l2, int r2)
{
    if (l1 > r1) return NULL;
    else
    {
        int k;
        for (k = 0; k < r1 - l1 + 1; k ++ )
            if (preorder[l1] == inorder[l2 + k]) break;
            
        BiNode *node = new BiNode(preorder[l1]);
        node -> lchild = dfs(l1 + 1, l1 + k, l2, l2 + k -1);
        node -> rchild = dfs(l1 + k + 1, r1, l2 + k + 1, r2);
        return node;
    }
}

void rear_show(BiNode *root)
{
    if (!root) return;
    else
    {
        rear_show(root -> lchild);
        rear_show(root -> rchild);
        cout << root -> val;
    }
}

int main()
{
    while (cin >> preorder >> inorder)
    {
        root = dfs(0, preorder.size() - 1, 0, inorder.size() - 1);
        rear_show(root);
        puts("");
    }
    
    return 0;
}