/*
#include <bits/stdc++.h>
void fun(TreeNode<int> *root, vector<int> &ans)
{
    queue<TreeNode<int> *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *f = q.front();
        q.pop();
        ans.push_back(f->val);
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    vector<int> ans;
    fun(root, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}
*/