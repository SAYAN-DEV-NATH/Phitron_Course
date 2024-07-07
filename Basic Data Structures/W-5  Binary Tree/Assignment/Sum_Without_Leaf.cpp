#include <bits/stdc++.h>
using namespace std;
int s1 = 0, s2 = 0;
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

void sum1(node *root)
{
    if (root == NULL)
        return;
    s1 = s1 + root->val;
    if (root->left == NULL && root->right == NULL)
        s2 = s2 + root->val;
    sum1(root->left);
    sum1(root->right);
}
int main()
{

    node *root = input();
    sum1(root);
    cout << s1 - s2;
    return 0;
}