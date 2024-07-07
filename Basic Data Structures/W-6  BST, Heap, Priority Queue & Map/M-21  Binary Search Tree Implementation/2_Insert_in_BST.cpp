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
TreeNode *input()
{
    int val;
    cin >> val;
    TreeNode *root;
    if (val == -1)
        root = NULL;
    else
        root = new TreeNode(val);
    queue<TreeNode *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        TreeNode *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new TreeNode(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new TreeNode(r);
        f->left = myLeft;
        f->right = myRight;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void output(TreeNode *root)
{
    queue<TreeNode *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
void insert(TreeNode *&root, int x)
{
    if (root == NULL)
    {
        root = new TreeNode(x);
        return;
    }

    if (x > root->val)
    {
        if (root->right == NULL)
            root->right = new TreeNode(x);
        else
            insert(root->right, x);
    }
    else
    {
        if (root->left == NULL)
            root->left = new TreeNode(x);
        else
            insert(root->left, x);
    }
}
int main()
{
    TreeNode *root = input();
    insert(root, 9);
    insert(root, 1);
    insert(root, 11);
    output(root);
    return 0;
}