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
void output(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int countNode(node *root)
{
    if (root == NULL)
        return 0;
    int l = countNode(root->left);
    int r = countNode(root->right);
    return l + r + 1;
}

int maxHight(node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHight(root->left);
    int r = maxHight(root->right);
    return max(l, r) + 1;
}

int countLeafNode(node *root)
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
    node *root = input();
    output(root);
    cout << "\n"
         << countNode(root) << endl;
    cout << countLeafNode(root) << endl;
    cout << maxHight(root);
    return 0;
}