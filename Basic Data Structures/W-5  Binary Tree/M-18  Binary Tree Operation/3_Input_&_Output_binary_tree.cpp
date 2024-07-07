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

TreeNode *inputTree()
{
    int data; // 1st work
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

        int l, r; // 2nd work
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

        f->left = myleft; // 3rd work
        f->right = myright;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void levelOrder(TreeNode *root)
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

int main()
{
    TreeNode *root = inputTree();
    levelOrder(root);
    return 0;
}