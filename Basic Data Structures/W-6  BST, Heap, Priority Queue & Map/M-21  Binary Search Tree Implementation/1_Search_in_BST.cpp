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
// void output(TreeNode *root)
// {
//     queue<TreeNode *> q;
//     if (root)
//         q.push(root);
//     while (!q.empty())
//     {
//         TreeNode *f = q.front();
//         q.pop();
//         cout << f->val << " ";
//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
// }
bool search(TreeNode *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (x > root->val)
    {
        bool r = search(root->right, x);
        return r;
    }
    else
        return search(root->left, x);
}
int main()
{
    TreeNode *root = input();
    // output(root);
    int x;
    cin >> x;

    if (search(root, x))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}