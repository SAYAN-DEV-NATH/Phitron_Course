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
TreeNode *convert(int arr[], int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;
    TreeNode *root = new TreeNode(arr[mid]);

    TreeNode *LeftRoot = convert(arr, l, mid - 1);
    TreeNode *RightRoot = convert(arr, mid + 1, r);

    root->left = LeftRoot;
    root->right = RightRoot;

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
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    TreeNode *root = convert(arr, 0, n - 1);
    output(root);
    return 0;
}