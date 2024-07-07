#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node *input()
{
    int val;
    cin >> val;
    node *root;
    if (val == -1)
        root = NULL;
    else
        root = new node(val);
    queue<node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        node *myleft, *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new node(r);

        f->left = myleft;
        f->right = myright;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void fun(node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->left)
        fun(root->left, v);
    else
        fun(root->right, v);
    v.push_back(root->val);
}
void fun1(node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    v.push_back(root->val);
    if (root->right)
        fun1(root->right, v);
    else
        fun1(root->left, v);
}
void fun2(node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    v.push_back(root->val);
    fun2(root->left, v);
    fun2(root->right, v);
}
void fun3(node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    fun3(root->left, v);
    fun3(root->right, v);
    v.push_back(root->val);
}
int main()
{
    node *root = input();
    vector<int> v;

    if (root->left == NULL && root->right != NULL)
    {
        fun2(root, v);
    }
    else if (root->left != NULL && root->right == NULL)
    {
        fun3(root, v);
    }
    else
    {
        fun(root, v);
        v.pop_back();
        fun1(root, v);
    }

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}
