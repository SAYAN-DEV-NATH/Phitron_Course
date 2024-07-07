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
        TreeNode *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new TreeNode(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new TreeNode(r);

        f->left = myleft;
        f->right = myright;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

int countLeafNode(TreeNode *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        int l = countLeafNode(root->left);
        int r = countLeafNode(root->right);
        return l + r;
    }
}
int main()
{
    TreeNode *root = input();
    cout << countLeafNode(root);
    return 0;
}