#include <bits/stdc++.h>
using namespace std;
bool flag = false;
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
void fun(node *root, vector<int> &v, int x)
{
    queue<pair<node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<node *, int> p = q.front();
        q.pop();
        node *f = p.first;
        int level = p.second;
        if (level == x)
        {
            flag = true;
            v.push_back(f->val);
        }
        if (f->left)
            q.push({f->left, level + 1});
        if (f->right)
            q.push({f->right, level + 1});
    }
}
int main()
{
    node *root = input();
    int x;
    cin >> x;
    vector<int> v;
    fun(root, v, x);
    if (flag)
    {
        for (int c : v)
        {
            cout << c << " ";
        }
    }
    else
        cout << "Invalid";
    return 0;
}