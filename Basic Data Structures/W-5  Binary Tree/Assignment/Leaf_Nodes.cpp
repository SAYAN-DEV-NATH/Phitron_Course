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
    if (root->left == NULL and root->right == NULL)
        v.push_back(root->val);
    fun(root->left, v);
    fun(root->right, v);
}
int main()
{
    node *root = input();
    vector<int> v;
    fun(root, v);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int c : v)
    {
        cout << c << " ";
    }
    return 0;
}