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
    int data;
    cin >> data;
    TreeNode *root;
    if (data == -1)
        root = NULL;
    else
        root = new TreeNode(data);
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

int maxHight(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int l = maxHight(root->left);
    int r = maxHight(root->right);
    return max(l, r) + 1;
}

int main()
{
    TreeNode *root = input();
    cout << maxHight(root);
    return 0;
}