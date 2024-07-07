#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *n = q.front();
        q.pop();

        cout << n->val << " "; // value left to right print hbe;

        if (n->left)
            q.push(n->left);
        if (n->right)
            q.push(n->right);
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    TreeNode *a = new TreeNode(2);
    TreeNode *b = new TreeNode(3);
    TreeNode *c = new TreeNode(4);
    TreeNode *d = new TreeNode(5);
    TreeNode *e = new TreeNode(6);
    TreeNode *f = new TreeNode(7);
    TreeNode *g = new TreeNode(8);
    TreeNode *h = new TreeNode(9);
    TreeNode *i = new TreeNode(10);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    c->left = g;
    c->right = h;
    d->left = i;

    levelOrder(root);
    return 0;
}